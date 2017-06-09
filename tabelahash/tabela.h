#ifndef  TABELA_H_INCLUDED
#define TABELA_H_INCLUDED
#include <stdlib.h>
#include <stdio.h>
#include <math.h>


typedef struct chave {
	int info;

}chave ;
typedef struct no {
	int qtd, tamanho;
	chave **itens;
}hash;



hash* criahash(int tamanho);
void liberahash(hash *h);
int chaveDivisao(int chave, int tamanho);
int chaveMultiplica(int chave, int tamanho);
void inserehash_sc(hash *h, chave k);
int  busca_sc(hash *h, int valor ,chave *k);
void imprime(hash *h);
void removeHash(hash*h, chave k);



#endif //   TABELA_H_INCLUDED











