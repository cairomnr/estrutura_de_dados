#include <stdio.h>
#include "ls.h"

int main(int argc, char const *argv[]) {

    LS *nova = ls_cria();

    ls_insere(&nova, 1);
    ls_insere(&nova, 2);
    ls_insere(&nova, 3);
    ls_insere(&nova, 4);

    ls_imprimir(nova);

    ls_remove(&nova, 4);

    ls_imprimir(nova);

    ls_remove(&nova);

    return 0;
}
