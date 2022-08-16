//
// Created by Thiago Fraga on 16/08/22.
//

#ifndef ESTRUTURAS_PILHAESTATICAFUNCOES_H
#define ESTRUTURAS_PILHAESTATICAFUNCOES_H

#include "pilhaestaticaestrutura.h"

void inicializarPilha(PILHA * p){

    p->topo = -1;
}

int tamanho(PILHA *p){

    return p->topo + 1;;
}

void exibirPilha(PILHA * p){

    int i;

    printf("Pilha: \"  ");

        for(i = p->topo; i >= 0; i++){

            printf("%d ", p->A[i].chave);

        }

    printf("\"\n");
}

bool inserirElemPilha(PILHA *p, REGISTRO reg){ //push

    if(p->topo >= MAX -1) return false;

    p->topo = p->topo + 1;
    p->A[p->topo] = reg;

    return true;
}

bool excluirElemPilha(PILHA *p, REGISTRO* reg){ //pop

    if(p->topo == -1) return false;

    *reg = p->A[p->topo];
    p->topo = p->topo - 1;

    return true;
}

void reinicializarPilha(PILHA *p){
    p->topo = -1;
}

#endif //ESTRUTURAS_PILHAESTATICAFUNCOES_H