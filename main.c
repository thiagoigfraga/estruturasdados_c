
#include "listaligadadinamica/listaligadadinamicafuncoes.h"


int main() {

    LISTA l;
    REGISTRO a,b,c,d;

    a.chave = 1;
    b.chave = 3;
    c.chave = 8;
    d.chave = 5;


    inicializarLista(&l);

    inserirElemListaOrd(&l,a);
    inserirElemListaOrd(&l,b);
    inserirElemListaOrd(&l,c);
    inserirElemListaOrd(&l,d);

    excluirElemLista(&l,5);

    exibirLista(&l);

}
