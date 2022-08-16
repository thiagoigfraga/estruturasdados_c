
#include "fila/filafuncoes.h"


int main() {

    FILA f;

    REGISTRO reg1, reg2,reg3, coleta;

    reg1.chave = 2;
    reg2.chave = 3;
    reg3.chave = 6;



    inicializarFila(&f);

    inserirElemFila(&f,reg1);
    inserirElemFila(&f,reg2);
    inserirElemFila(&f,reg3);
    excluirElemFila(&f,&coleta);

    exibirFila(&f);

    printf("%d", tamanho(&f));


}
