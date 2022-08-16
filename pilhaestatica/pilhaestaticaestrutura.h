//
// Created by Thiago Fraga on 16/08/22.
//

#ifndef ESTRUTURAS_PILHAESTATICAESTRUTURA_H
#define ESTRUTURAS_PILHAESTATICAESTRUTURA_H

#include <stdio.h>

#define MAX 50

#define true 1
#define false 0
typedef int bool;


typedef int TIPOCHAVE;

typedef struct{

    TIPOCHAVE chave;

}REGISTRO;


typedef struct {

    REGISTRO A[MAX];
    int topo;

}PILHA;

#endif //ESTRUTURAS_PILHAESTATICAESTRUTURA_H
