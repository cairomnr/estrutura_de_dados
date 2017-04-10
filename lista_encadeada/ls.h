#ifndef LS_H
#define	LS_H

// Define a estrutura da lista
struct lista_simples {
	int valor;
	struct lista_simples *prox;
};

typedef struct lista_simples LS;

/**
 *  Função para criação de uma lista vazia
 *
 *  @params
 *  @return LS *
*/
LS *ls_cria();

/**
 *  Função para inserção de elementos da lista
 *
 *  @params int | LS **
 *  @return void
*/
void ls_insere(int, LS **);

/**
 *  Função para remoção de elementos da lista
 *
 *  @params int | LS **
 *  @return void
*/
void ls_remove(int, LS **);

/**
 *  Função para verificar se uma lista é vazia
 *
 *  @params LS *
 *  @return int (true/false)
*/
int ls_vazia(LS *);

/**
 *  Função para percorrer a lista e imprimi-la
 *
 *  @params LS *
 *  @return int (true/false)
*/
void ls_imprimir(LS *);

/* Libera os elementos da lista encadeada
 * @params LS **
 * @return void
*/
void ls_libera(LS **);

#endif
