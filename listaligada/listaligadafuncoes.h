//
// Created by Thiago Fraga on 09/08/22.
//

#ifndef ESTRUTURAS_LISTALIGADAFUNCOES_H
#define ESTRUTURAS_LISTALIGADAFUNCOES_H

#include <stdio.h>
#include <stdbool.h>
#include "listaligadaestrutura.h"

void inicializarLista(LISTA *l){
    int i;

    for(i = 0; i < MAX -1; i++){
        l->A[i].prox = i+1;
    }

    l->A[MAX -1].prox = INVALIDO;
    l->inicio = INVALIDO;
    l->dispo = 0;
}

int tamanho(LISTA *l){

    int i = l->inicio;
    int tam = 0;

    while(i != INVALIDO){
        tam++;
        i = l->A[i].prox;
    }

    return tam;
}

void exibirLista(LISTA *l){

    int i = l->inicio;
    printf("Lista: \" ");

    while(i != INVALIDO){
        printf("%i ", l->A[i].reg.chave);
        i = l->A[i].prox;
    }

    printf("\"\n");
}

int buscaSequencialOrd(LISTA *l, TIPOCHAVE ch){
    int i = l->inicio;

    while(i != INVALIDO && l->A[i].reg.chave < ch){
        i = l->A[i].prox;
    }

    if(i != INVALIDO && l->A[i].reg.chave == ch) return i;

    else return INVALIDO;
}

int obterNo(LISTA *l){

    int resultado = l->dispo;

    if(l->dispo != INVALIDO){
        l->dispo = l->A[l->dispo].prox;
    }

    return resultado;
}

bool inserirElemListaOrd(LISTA *l, REGISTRO reg){

    //Se a lista estiver cheia, o dispo estará como -1 porque não haverá mais elementos disponíveis para inserir,
    // retorno false (0) imediato
    if(l->dispo == INVALIDO) return false;

    //Como ele começa a varrer a lista pelo início, o anterior ao início é -1 (não existe)
    int ant = INVALIDO;
    int i = l->inicio; //(Se for a primeira inserção, o l->inicio será -1)
    TIPOCHAVE ch = reg.chave; //A chave do registro a ser inserido

    /* Se o i não for inválido (precisa varrer a lista até o fim) e a chave a ser inserida é maior que o
       index buscado, então ele vai varrer a lista até que encontre a posição em que a chave a ser inserida seja menor
       (Esse while é ignorado se for a primeira inserção)
    */
    while((i != INVALIDO) && (l->A[i].reg.chave < ch)){
        ant = i;
        i= l->A[i].prox;
    }

    /*Após encontrar o index ele valida se a chave que está sendo procurada já existe na lista, se já existir ele
     retorna false (regra da implementação)
     (Esse while é ignorado se for a primeira inserção ou se o index não for encontrado na lista)
     */
    if(i != INVALIDO && l->A[i].reg.chave == ch) return false;

    //Ele obtém o nó do elemento disponível mais próximo e insere em i
    i = obterNo(l);

    //Insere o registro da inserção no registro do elemento que está disponível
    l->A[i].reg = reg;

    //Se o anterior é inválido, significa que a inserção está sendo feita na primeira posição da lista
    if(ant == INVALIDO){
        // O -1 que estava em início agora é o prox da primeira posição, assumindo que só existe um elemento e a
        //   lista para por aí.
        l->A[i].prox = l->inicio;

        //O início agora é 0
        l->inicio = i;

    //Do contrário, se assume que o elemento a ser inserido tem um elemento anterior a ele
    }else{
        //Agora o próximo do elemento atual recebe o próximo do seu elemento anterior, pela ordenação.
        l->A[i].prox = l->A[ant].prox;

        //O próximo do anterior agora aponta pro elemento que agora foi inserido.
        l->A[ant].prox = i;
    }

    //Processo conclúido, mensagem true (1)
    return true;
}

void devolverNo(LISTA *l, int j){
    l->A[j].prox = l->dispo;
    l->dispo = j;
}

bool excluirElemLista(LISTA* l, TIPOCHAVE ch) {

    int ant = INVALIDO;
    int i = l->inicio;
    while ((i != INVALIDO) && (l->A[i].reg.chave<ch)) {
        ant = i;
        i = l->A[i].prox;
    }
    if (i==INVALIDO || l->A[i].reg.chave!=ch) return false;
    if (ant == INVALIDO) l->inicio = l->A[i].prox;
    else l->A[ant].prox = l->A[i].prox;
    devolverNo(l,i);
    return true;
}


void reinicializarLista(LISTA *l){
    inicializarLista(l);
}


#endif //ESTRUTURAS_LISTALIGADAFUNCOES_H
