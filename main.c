
#include "listaligada/listaligadafuncoes.h"


int main() {

    LISTA l;
    REGISTRO reg1,reg2,reg3,reg4;
    reg1.chave = 4;
    reg2.chave = 7;
    reg3.chave = 5;
    reg4.chave = 8;



    inicializarLista(&l);
    inserirElemListaOrd(&l, reg1);
    inserirElemListaOrd(&l, reg2);
    inserirElemListaOrd(&l, reg3);
    inserirElemListaOrd(&l, reg4);


    excluirElemLista(&l,4);
    excluirElemLista(&l,5);



    exibirLista(&l);
}
