#include <stdio.h>
#include "pv.h"

int main() {
    PV *n = pv_cria();

    pv_empilha(n, 1);
    pv_empilha(n, 2);
    pv_empilha(n, 3);
    pv_empilha(n, 4);

    printf("Pilha vazia => %d\n", pv_vazia(n));

    printf("Topo => %d\n", pv_desempilha(n));
    printf("Topo => %d\n", pv_desempilha(n));
    printf("Topo => %d\n", pv_desempilha(n));
    printf("Topo => %d\n", pv_desempilha(n));

    printf("Pilha vazia => %d\n", pv_vazia(n));

    return 0;
}
