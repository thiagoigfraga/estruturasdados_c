//
// Created by Thiago Fraga on 09/08/22.
//

#ifndef ESTRUTURAS_LISTALIGADAESTRUTURA_H
#define ESTRUTURAS_LISTALIGADAESTRUTURA_H

#define MAX 50
#define INVALIDO -1

typedef int TIPOCHAVE;

typedef struct{

    TIPOCHAVE chave;

}REGISTRO;

typedef struct {

    REGISTRO reg;
    int prox;

}ELEMENTO;

typedef struct {

    ELEMENTO A[MAX];
    int inicio;
    int dispo;

}LISTA;

#endif //ESTRUTURAS_LISTALIGADAESTRUTURA_H
