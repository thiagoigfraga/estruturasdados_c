//
// Created by Thiago Fraga on 12/08/22.
//

#ifndef ESTRUTURAS_LISTALIGADADINAMICAESTRUTURA_H
#define ESTRUTURAS_LISTALIGADADINAMICAESTRUTURA_H

#define MAX 50
#define INVALIDO -1

typedef int TIPOCHAVE;

typedef struct{

    TIPOCHAVE chave;

}REGISTRO;

typedef struct aux{

    REGISTRO reg;
    struct aux* prox;

}ELEMENTO;

typedef ELEMENTO* PONT;

typedef struct {

    PONT inicio;

}LISTA;

#endif //ESTRUTURAS_LISTALIGADADINAMICAESTRUTURA_H
