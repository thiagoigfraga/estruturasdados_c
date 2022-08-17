//
// Created by Thiago Fraga on 16/08/22.
//

#ifndef ESTRUTURAS_FILADINAMICAESTRUTURA_H
#define ESTRUTURAS_FILADINAMICAESTRUTURA_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int TIPOCHAVE;

typedef struct{

    TIPOCHAVE chave;

}REGISTRO;

typedef struct aux{

    REGISTRO reg;
    struct aux* prox;

}ELEMENTO, *PONT;

typedef struct{

    PONT inicio;
    PONT fim;

}FILA;

#endif //ESTRUTURAS_FILADINAMICAESTRUTURA_H
