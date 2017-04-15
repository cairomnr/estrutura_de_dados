#include <stdio.h>
#include <stdlib.h>
#include "pv.h"

/**
 *  Função para criação de uma pilha vazia
 *
 *  @params
 *  @return PV *
*/
PV *pv_cria() {
    PV *pilha = (PV *) malloc(sizeof(PV));
    pilha->topo = 0;
    return pilha;
}

/**
 *  Função para empilhar um elemento na pilha
 *
 *  @params LS * | int
 *  @return void
*/
void pv_empilha(PV *pilha, int valor) {
    if(pilha->topo >= LIMITE) {
        printf("Impossivel adicionar em pilha cheia. O programa sera encerrado.");
        exit(0);
    }

    pilha->vet[pilha->topo] = valor;
    pilha->topo++;
}

/**
 *  Função para desempilhar um elemento da pilha / Retorna o valor desempilhado
 *
 *  @params LS *
 *  @return int
*/
int pv_desempilha(PV *pilha) {
    int temp;

    if(pv_vazia(pilha)) {
        printf("Impossivel remover de pilha vazia. O programa sera encerrado.");
        exit(0);
    }

    temp = pilha->vet[pilha->topo - 1];
    pilha->topo--;
    return temp;
}

/**
 *  Função para verificar se a pilha está vazia
 *
 *  @params LS *
 *  @return int
*/
int pv_vazia(PV *pilha) {
    return (pilha->topo <= 0);
}

/**
 *  Função liberar a pilha
 *
 *  @params LS *
 *  @return void
*/
void pv_libera(PV *pilha) {
    free(pilha);
}
