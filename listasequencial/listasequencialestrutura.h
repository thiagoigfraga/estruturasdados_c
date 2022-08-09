//
// Created by Thiago Fraga on 09/08/22.
//

#ifndef ESTRUTURAS_LISTASEQUENCIALESTRUTURA_H
#define ESTRUTURAS_LISTASEQUENCIALESTRUTURA_H

#define MAX 50

typedef int TIPOCHAVE;

typedef struct {
    TIPOCHAVE chave;
}REGISTRO;

typedef struct{
    REGISTRO A[MAX];
    int nroElem;
}LISTA;


#endif //ESTRUTURAS_LISTASEQUENCIALESTRUTURA_H
