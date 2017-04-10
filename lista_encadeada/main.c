#include <stdio.h>
#include "ls.h"

int main(int argc, char const *argv[]) {

    LS *nova = ls_cria();

    ls_insere(15, &nova);
    ls_insere(10, &nova);
    ls_insere(7, &nova);
    ls_insere(3, &nova);

    ls_imprimir(nova);

    ls_remove(7, &nova);
    ls_remove(5, &nova);

    ls_imprimir(nova);

    ls_libera(&nova);

    ls_imprimir(nova);

    return 0;
}
