#include "pl.h"
#include <stdio.h>

int main() {
    PL *pilha = pl_cria();

    pl_empilha(&pilha, 15);
    pl_empilha(&pilha, 10);
    pl_empilha(&pilha, 5);
    pl_empilha(&pilha, 0);

    printf("Pilha vazia => %d\n", pl_vazia(pilha));

    printf("Desempilhou => %d\n", pl_desempilha(&pilha));
    printf("Desempilhou => %d\n", pl_desempilha(&pilha));
    printf("Desempilhou => %d\n", pl_desempilha(&pilha));
    printf("Desempilhou => %d\n", pl_desempilha(&pilha));

    printf("Pilha vazia => %d\n", pl_vazia(pilha));

    pl_libera(&pilha);

    printf("Pilha vazia => %d\n", pl_vazia(pilha));
    return 0;
}


