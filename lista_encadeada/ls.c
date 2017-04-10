#include "ls.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *  Função para criação de uma lista vazia
 *
 *  @params
 *  @return LS *
*/
LS *ls_cria() {
	return NULL;
}

/**
 *  Função para inserção de elementos na lista
 *
 *  @params LS ** | int
 *  @return void
*/
void ls_insere(LS **lista, int valor) {
	LS *no = (LS *) malloc(sizeof(LS));

	no->valor = valor;
	no->prox = *lista;

	*lista = no;
}

/**
 *  Função para remoção de elementos da lista
 *
 *  @params LS ** | int
 *  @return void
*/
void ls_remove(LS **lista, int valor) {
	// Declara as variaveis -
	// LS *aux recebe o valor do ponteiro de ponteiro (O Endereco inicial da lista)
	LS *aux = *lista;
	LS *anterior = NULL;

	// Percorre a lista enquato o valor for diferente ou
	// o proximo elemento da lista for diferente de NULL
	while(aux->valor != valor && aux->prox != NULL) {
		anterior = aux;
		aux = aux->prox;
	}

	// Verifica se o proximo elemento é o nulo e
	// se o valor é diferente do valor passado
	if(aux->prox == NULL && aux->valor != valor)
		return ;

	// Verifica se o elemento está no meio da lista
	if(anterior != NULL)
		anterior->prox = aux->prox;

	// Verifica se é o primeiro elemento da lista
	if(aux == *lista)
		*lista = aux->prox;

	// Libera a lista que possui o elemento
	free(aux);
}

/**
 *  Função para verificar se uma lista é vazia
 *
 *  @params LS *
 *  @return int (true/false)
*/
int ls_vazia(LS *lista) {
	return (lista == NULL);
}

/**
 *  Função para percorrer a lista e imprimi-la
 *
 *  @params LS *
 *  @return int (true/false)
*/
void ls_imprimir(LS *lista) {
	while(lista != NULL) {
		printf("%d -> ", lista->valor);
		lista = lista->prox;
	}
	printf("NULL\n");
}

/* Libera os elementos da lista encadeada
 * @params LS **
 * @return void
*/
void ls_libera(LS **lista) {
	LS *aux = *lista;
	LS *prox = NULL;

	while(aux != NULL) {
		prox = aux->prox;
		free(aux);
		aux = prox;
	}

	*lista = prox;
}
