//
// Created by Thiago Fraga on 16/08/22.
//

#ifndef ESTRUTURAS_FILADINAMICAFUNCOES_H
#define ESTRUTURAS_FILADINAMICAFUNCOES_H

#include "filadinamicaestrutura.h"

void inicializarFila(FILA *f){
    f->inicio = NULL;
    f->fim = NULL;
}

int tamanho(FILA *f){
    int tam = 0;
    PONT end = f->inicio;

    while(end != NULL){
        tam++;
        end = end->prox;
    }

    return tam;
}

void exibirElemFila(FILA *f){

    PONT end = f->inicio;

    printf("FILA: \" ");

    while(end != NULL){
        printf("%d ", end->reg.chave);
        end = end->prox;
    }

    printf("\" ");
}

bool inserirElemFila(FILA *f, REGISTRO reg){

    PONT novo = (PONT) malloc(sizeof(ELEMENTO));
    novo->reg = reg;
    novo->prox = NULL;

    if(f->inicio == NULL){
        f->inicio = novo;
    }else{
        f->fim->prox = novo;
    }

    f->fim = novo;

    return true;
}

bool excluirElemFila(FILA *f, REGISTRO *reg){

    if(f->inicio == NULL) return false;

    *reg = f->inicio->reg;
    PONT apagar = f->inicio;
    f->inicio = f->inicio->prox;
    free(apagar);

    if(f->inicio == NULL) f->fim = NULL;

    return true;
}

void reinicializarFila(FILA *f){

    PONT end = f->inicio;

    while(end != NULL){
        PONT apagar = end;
        end = end->prox;
        free(apagar);
    }

    f->inicio = NULL;
    f->fim = NULL;
}


#endif //ESTRUTURAS_FILADINAMICAFUNCOES_H
