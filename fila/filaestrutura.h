//
// Created by Thiago Fraga on 16/08/22.
//

#ifndef ESTRUTURAS_FILAESTRUTURA_H
#define ESTRUTURAS_FILAESTRUTURA_H

#include <stdio.h>
#include <stdbool.h>

#define MAX 50

typedef int TIPOCHAVE;

typedef struct{
    TIPOCHAVE chave;
}REGISTRO;

typedef struct{
    REGISTRO A[MAX];
    int inicio;
    int nroElem;
}FILA;



#endif //ESTRUTURAS_FILAESTRUTURA_H
