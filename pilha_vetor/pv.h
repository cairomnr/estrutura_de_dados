#ifndef PV_H
#define PV_H

#define LIMITE 30

struct pilha_vetor {
    int topo;
    int vet[LIMITE];
};

typedef struct pilha_vetor PV;

/**
 *  Função para criação de uma pilha vazia
 *
 *  @params
 *  @return PV *
*/
PV *pv_cria();

/**
 *  Função para empilhar um elemento na pilha
 *
 *  @params LS * | int
 *  @return void
*/
void pv_empilha(PV *, int);

/**
 *  Função para desempilhar um elemento da pilha / Retorna o valor desempilhado
 *
 *  @params LS *
 *  @return int
*/
int pv_desempilha(PV *);

/**
 *  Função para verificar se a pilha está vazia
 *
 *  @params LS *
 *  @return int
*/
int pv_vazia(PV *);

/**
 *  Função liberar a pilha
 *
 *  @params LS *
 *  @return void
*/
void pv_libera(PV *);

#endif
