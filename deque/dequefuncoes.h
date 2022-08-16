//
// Created by Thiago Fraga on 16/08/22.
//

#ifndef ESTRUTURAS_DEQUEFUNCOES_H
#define ESTRUTURAS_DEQUEFUNCOES_H

#include "dequeestrutura.h"

void inicializarDeque(DEQUE *d){

    d->cabeca = (PONT) malloc(sizeof(ELEMENTO));
    d->cabeca->prox = d->cabeca;
    d->cabeca->ant = d->cabeca;
}

int tamanho(DEQUE *d){

    int tam = 0;
    PONT end = d->cabeca->prox;

    while(end != d->cabeca){
        tam++;
        end = end->prox;
    }

    return tam;
}

void exibirDequeFim(DEQUE *d){
    PONT end = d->cabeca->ant;

    printf("Deque partindo do fim: \" ");

    while(end != d->cabeca){

        printf("%d ", end->reg.chave);
        end = end->ant;
    }

    printf("\"\n");
}

bool inserirElemDequeInicio(DEQUE *d, REGISTRO reg){

    PONT novo = (PONT) malloc(sizeof(ELEMENTO));
    novo->reg = reg;

    novo->ant = d->cabeca;
    novo->prox = d->cabeca->prox;
    d->cabeca->prox = novo;
    novo->prox->ant = novo;

    return true;
}

bool inserirElemDequeFim(DEQUE *d, REGISTRO reg){

    PONT novo = (PONT) malloc(sizeof(ELEMENTO));

    novo->reg = reg;
    novo->prox = d->cabeca;
    novo->ant = d->cabeca->ant;
    d->cabeca->ant = novo;
    novo->ant->prox = novo;

    return true;
}

bool excluirElemDequeInicio(DEQUE *d, REGISTRO *reg){

    if(d->cabeca->prox == d->cabeca) return false;

    PONT apagar = d->cabeca->prox;
    *reg = apagar->reg;

    d->cabeca->prox = apagar->prox;
    apagar->prox->ant = d->cabeca;

    free(apagar);

    return true;
}

bool excluirElemDequeFim(DEQUE *d, REGISTRO *reg){

    if(d->cabeca->ant == d->cabeca) return false;

    PONT apagar = d->cabeca->ant;
    *reg = apagar->reg;

    d->cabeca->ant = apagar->ant;
    apagar->ant->prox = d->cabeca;

    free(apagar);

    return true;
}

bool reinicializarDeque(DEQUE *d){
    PONT end = d->cabeca->prox;

    while(end->prox != d->cabeca){
        PONT apagar = end;
        end = end->prox;
        free(apagar);
    }

    d->cabeca->ant = d->cabeca;
    d->cabeca->prox = d->cabeca;

    return true;
}

#endif //ESTRUTURAS_DEQUEFUNCOES_H
