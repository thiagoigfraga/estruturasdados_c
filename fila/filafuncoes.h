//
// Created by Thiago Fraga on 16/08/22.
//

#ifndef ESTRUTURAS_FILAFUNCOES_H
#define ESTRUTURAS_FILAFUNCOES_H

#include "filaestrutura.h"

void inicializarFila(FILA *f){

    f->nroElem = 0;
    f->inicio = 0;
}

int tamanho(FILA *f){
    return f->nroElem;
}

void exibirFila(FILA *f){


    int i = f->inicio, aux;

    printf("Fila: \" ");

    for(aux = 0; aux < f->nroElem; aux++){

        printf("%d ", f->A[i].chave);

        i = (i+1) % MAX;
    }

    printf("\"\n");
}

bool inserirElemFila(FILA *f, REGISTRO reg){

    if(f->nroElem >= MAX) return false;

    int posicao = (f->inicio + f->nroElem) % 50;

    f->A[posicao] = reg;
    f->nroElem++;

    return true;
}

bool excluirElemFila(FILA *f, REGISTRO *reg){

    if(f->nroElem == 0) return false;

    *reg = f->A[f->inicio];

    f->inicio = (f->inicio+1) % MAX;
    f->nroElem--;

    return true;
}

void reinicializarFila(FILA *f){

    f->inicio = 0;
    f->nroElem = 0;
}

#endif //ESTRUTURAS_FILAFUNCOES_H