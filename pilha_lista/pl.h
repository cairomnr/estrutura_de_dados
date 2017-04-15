#ifndef PL_H
#define PL_H

struct pilha_lista {
    int valor;
    struct pilha_lista *prox;
};

typedef struct pilha_lista PL;

/**
 *  Função para criação de uma pilha vazia
 *
 *  @params
 *  @return PV *
*/
PL *pl_cria();

/**
 *  Função para empilhar um elemento na pilha
 *
 *  @params LS ** | int
 *  @return void
*/
void pl_empilha(PL **, int);

/**
 *  Função para desempilhar um elemento da pilha / Retorna o valor desempilhado
 *
 *  @params LS **
 *  @return int
*/
int pl_desempilha(PL **);

/**
 *  Função para verificar se a pilha está vazia
 *
 *  @params LS *
 *  @return int
*/
int pl_vazia(PL *);

/**
 *  Função liberar a pilha
 *
 *  @params LS **
 *  @return void
*/
void pl_libera(PL **);

#endif
