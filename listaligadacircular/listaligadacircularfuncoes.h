//
// Created by Thiago Fraga on 15/08/22.
//



#ifndef ESTRUTURAS_LISTALIGADACIRCULARFUNCOES_H
#define ESTRUTURAS_LISTALIGADACIRCULARFUNCOES_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "listaligadacircularestrutura.h"

void inicializarLista(LISTA *l){
    l->cabeca = (PONT) malloc(sizeof(ELEMENTO));
    l->cabeca->prox = l->cabeca;
}

int tamanho(LISTA *l){
    PONT end = l->cabeca->prox;
    int tam = 0;

    while(end != l->cabeca){
        tam++;
        end = end->prox;
    }

    return tam;
}

void exibirLista(LISTA* l){

    PONT end = l->cabeca->prox;

    printf("Lista: \"  ");

    while(end != l->cabeca){
        printf("%d ", end->reg.chave);
        end = end->prox;
    }

    printf("\"\n");
}

PONT buscaSentinelaOrd(LISTA *l, TIPOCHAVE ch){
    PONT pos = l->cabeca->prox;
    l->cabeca->reg.chave = ch;

    while(pos->reg.chave < ch) pos = pos->prox;
    if((pos != l->cabeca) && (pos->reg.chave == ch)) return pos;

    return NULL;
}

PONT buscaSeqExc(LISTA *l, TIPOCHAVE ch, PONT* ant){
    *ant = l->cabeca;
    PONT atual = l->cabeca->prox;
    l->cabeca->reg.chave = ch;

    while(atual->reg.chave < ch){
        *ant = atual;
        atual = atual->prox;
    }

    if(atual != l->cabeca && atual->reg.chave == ch) return atual;

    return NULL;
}

bool inserirElemListaOrd(LISTA *l, REGISTRO reg){

    PONT ant, i;
    i = buscaSeqExc(l,reg.chave, &ant);

    if(i == NULL) return false;

    i = (PONT) malloc(sizeof (ELEMENTO));
    i->reg = reg;
    i->prox = ant->prox;
    ant->prox = i;

    return true;
}

bool excluirElemLista(LISTA *l, TIPOCHAVE ch){

    PONT ant, i;
    i = buscaSeqExc(l, ch, &ant);

    if(i == NULL) return false;

    ant->prox = i->prox;

    free(i);

    return true;
}

void reinicializarLista(LISTA *l){
    PONT end = l->cabeca->prox;

    while(end != l->cabeca){
        PONT apagar = end;
        end = end->prox;
        free(apagar);
    }

    l->cabeca->prox = l->cabeca;
}



#endif //ESTRUTURAS_LISTALIGADACIRCULARFUNCOES_H
