//
// Created by Thiago Fraga on 15/08/22.
//

#ifndef ESTRUTURAS_LISTALIGADACIRCULARESTRUTURA_H
#define ESTRUTURAS_LISTALIGADACIRCULARESTRUTURA_H

#define INVALIDO -1

typedef int TIPOCHAVE;

typedef struct{

    TIPOCHAVE chave;

}REGISTRO;

typedef struct tempRegistro{

    REGISTRO reg;
    struct tempRegistro* prox;

}ELEMENTO;

typedef ELEMENTO* PONT;

typedef struct {

    PONT cabeca;

}LISTA;


#endif //ESTRUTURAS_LISTALIGADACIRCULARESTRUTURA_H

