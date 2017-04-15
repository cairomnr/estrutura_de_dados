#include <stdlib.h>
#include <stdio.h>
#include "pl.h"

/**
 *  Função para criação de uma pilha vazia
 *
 *  @params
 *  @return PV *
*/
PL *pl_cria() {
    return NULL;
}

/**
 *  Função para empilhar um elemento na pilha
 *
 *  @params LS ** | int
 *  @return void
*/
void pl_empilha(PL **pilha, int valor) {
    PL *no = (PL *) malloc(sizeof(PL));
    no->valor = valor;
    no->prox = *pilha;

    *pilha = no;
}

/**
 *  Função para desempilhar um elemento da pilha / Retorna o valor desempilhado
 *
 *  @params LS **
 *  @return int
*/
int pl_desempilha(PL **pilha) {
    PL *aux = *pilha;
    int valor;

    if(pl_vazia(*pilha)) {
        printf("Impossivel remover de pilha vazia. O programa sera encerrado.");
        exit(0);
    }

    valor = aux->valor;
    *pilha = (*pilha)->prox;
    
    return valor;
}

/**
 *  Função para verificar se a pilha está vazia
 *
 *  @params LS *
 *  @return int
*/
int pl_vazia(PL *pilha) {
    return (pilha == NULL);
}

/**
 *  Função liberar a pilha
 *
 *  @params LS **
 *  @return void
*/
void pl_libera(PL **pilha) {
    while(*pilha != NULL)
        pl_desempilha(pilha);
    *pilha = NULL;
}
