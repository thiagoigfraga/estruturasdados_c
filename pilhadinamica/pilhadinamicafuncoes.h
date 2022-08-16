//
// Created by Thiago Fraga on 16/08/22.
//

#ifndef ESTRUTURAS_PILHADINAMICAFUNCOES_H
#define ESTRUTURAS_PILHADINAMICAFUNCOES_H

#include <stdlib.h>
#include "pilhadinamicaestrutura.h"

void inicializarPilha(PILHA *p){

    p->topo = NULL;
}

int tamanho(PILHA *p){

    int tam = 0;
    PONT end = p->topo;

    while(end != NULL){
        tam++;
        end = end->prox;
    }

    return tam;
}

bool estaVazia(PILHA *p){
    if(p->topo == NULL) return true;

    return false;
}

void exibirPilha(PILHA *p){
    PONT end = p->topo;

    printf("Pilha: \" ");

    while(end != NULL){
        printf("%d ", end->reg.chave);
        end = end->prox;
    }

    printf("\" \n");
}

bool inserirElemPilha(PILHA *p, REGISTRO reg){ //push

    PONT novo = (PONT) malloc(sizeof(ELEMENTO));
    novo->reg = reg;
    novo->prox = p->topo;
    p->topo = novo;

    return true;
}

bool excluirElemPilha(PILHA *p, REGISTRO* reg){ //pop

    if(p->topo == NULL) return false;

    *reg = p->topo->reg;
    PONT apagar = p->topo;
    p->topo = p->topo->prox;

    free(apagar);

    return true;
}

void reinicializarPilha(PILHA *p){

    PONT apagar;
    PONT posicao = p->topo;

    while(posicao != NULL){

        apagar = posicao;
        posicao = posicao->prox;
        free(apagar);
    }

    p->topo = NULL;
}


#endif //ESTRUTURAS_PILHADINAMICAFUNCOES_H
