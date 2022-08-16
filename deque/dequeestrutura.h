//
// Created by Thiago Fraga on 16/08/22.
//

#ifndef ESTRUTURAS_DEQUEESTRUTURA_H
#define ESTRUTURAS_DEQUEESTRUTURA_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int TIPOCHAVE;

typedef struct {
    TIPOCHAVE chave;
}REGISTRO;

typedef struct auxElem{
    REGISTRO reg;
    struct auxElem* ant;
    struct auxElem* prox;
}ELEMENTO;

typedef ELEMENTO* PONT;

typedef struct {
    PONT cabeca;
}DEQUE;

#endif //ESTRUTURAS_DEQUEESTRUTURA_H
