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

    if(l->dispo == INVALIDO) return false;

    int ant = INVALIDO;
    int i = l->inicio;
    TIPOCHAVE ch = reg.chave;

    while((i))

}

#endif //ESTRUTURAS_LISTALIGADAFUNCOES_H
