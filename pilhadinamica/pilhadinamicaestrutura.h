//
// Created by Thiago Fraga on 16/08/22.
//

#ifndef ESTRUTURAS_PILHADINAMICAESTRUTURA_H
#define ESTRUTURAS_PILHADINAMICAESTRUTURA_H

#include <stdio.h>
#include <malloc/malloc.h>

#define true 1
#define false 0
typedef int bool;

typedef int TIPOCHAVE;

typedef struct{

    TIPOCHAVE chave;

}REGISTRO;

typedef struct aux{

    REGISTRO reg;
    struct aux* prox;

}ELEMENTO;

typedef ELEMENTO* PONT;

typedef struct{

    PONT topo;

}PILHA;

#endif //ESTRUTURAS_PILHADINAMICAESTRUTURA_H
