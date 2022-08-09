//
// Created by Thiago Fraga on 08/08/22.
//

#include <stdio.h>
#include <stdbool.h>
#include "listasequencialestrutura.h"

#ifndef ESTRUTURAS_LISTASEQUENCIALFUNCOES_H
#define ESTRUTURAS_LISTASEQUENCIALFUNCOES_H

void inicializarEstrutura(LISTA *l){
    l->nroElem = 0;
}

int tamanho(LISTA *l){
    return l->nroElem;
}

void exibirLista(LISTA* l){
    int i;
    printf("Lista: \"  ");

    for(i =0; i < l->nroElem; i++){
        printf("%d ", l->A[i].chave);
    }

    printf("\"\n");
}

int buscaSequencial(LISTA* l, TIPOCHAVE ch){

    int i = 0;

    while(i < l->nroElem){
        if(ch == l->A[i].chave) return i;
        else i++;
    }

    return -1;
}

bool inserirElemLista(LISTA* l, REGISTRO reg, int i){

    int j;

    if(l->nroElem == MAX || i < 0 || i > l->nroElem) return false;

    for(j = l->nroElem; j > i ; j--) l->A[j] = l->A[j-1];

    l->A[i] = reg;
    l->nroElem++;

    return true;
}

bool excluirElemLista(LISTA* l, TIPOCHAVE ch){

    int pos,j;

    pos = buscaSequencial(l,ch);

    if(pos == -1) return false;

    for(j = pos; j < l->nroElem-1; j++) l->A[j] = l->A[j+1];

    l->nroElem--;

    return true;
}

void reinicializarLista(LISTA *l){
    l->nroElem = 0;
}

void bubbleSort(LISTA *l){

    int i, j;

    for(i = l->nroElem-1; i > 0; i--){

        for(j = 0; j < i; j++){

            if(l->A[j].chave > l->A[j+1].chave) {

                int aux = l->A[j+1].chave;
                l->A[j+1].chave = l->A[j].chave;
                l->A[j].chave = aux;
            }
        }
    }
}

int binarySearch(LISTA *l, TIPOCHAVE ch){

    bubbleSort(l);
    exibirLista(l);

    int ini = 0,middle,end,achou = 0, pos;

    end = l->nroElem -1;

    while(ini <= end){

        middle = (ini + end) / 2;

        if(l->A[middle].chave > ch){
            end--;
        }
        if(l->A[middle].chave < ch){
            ini++;
        }
        if(l->A[middle].chave == ch){
            achou = 1;
            pos = middle;
            break;
        }
    }

    if(achou){
        return pos;
    }
    else{
        return -1;
    }
}

#endif //ESTRUTURAS_LISTASEQUENCIALFUNCOES_H