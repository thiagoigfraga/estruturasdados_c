
#include "listaligada/listaligadafuncoes.h"


int main() {

    LISTA l;
    REGISTRO reg1,reg2,reg3,reg4;
    reg1.chave = 1;
    reg2.chave = 2;
    reg3.chave = 4;
    reg4.chave = 3;

    inicializarLista(&l);
    inserirElemListaOrd(&l, reg1);
    exibirLista(&l);




}
