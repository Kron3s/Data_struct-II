#include "tabela.h"


hash* criahash(int tamanho){
	hash *ha = (hash*)malloc(sizeof(hash));
	
	if (ha) {
		
		ha->tamanho = tamanho;
		ha->itens = (chave**)malloc(sizeof(chave*)*tamanho);
	}
	for (int i = 0; i < tamanho; i++) {
		ha->itens[i] = NULL;
	}
	ha->qtd = 0;
	
	return ha;

}


void liberahash(hash *h) {
	if (h != NULL) {
		int i;
		for (i = 0; i < h->tamanho; i++) {
			if (h->itens[i] != NULL)
				free(h->itens[i]);
		}
		
	}
	free(h->itens);
	free(h);
}

int chaveDivisao(int chave, int tamanho) {
	int x = ((chave & 0x7fffffff) % tamanho);
	return x;
}


int chaveMultiplica(int chave, int tamanho) {
	double A = 0.61803398;
	double val = chave *A;
	val = val - (int)val;
	return (int)(tamanho*val);


}

void inserehash_sc(hash *h, chave k) {
	if (h == NULL || h->qtd == h->tamanho) {
		puts("tabela cheia");
	}
	else {
		chave *novo = (chave*)malloc(sizeof(chave));

		int pos = chaveMultiplica(k.info, h->tamanho);
		*novo = k;
		h->itens[pos] = novo;
		h->qtd++;

	}

}

int  busca_sc(hash *h, int valor,chave *k) {
	int pos = chaveMultiplica(valor,h->tamanho);

	if (h == NULL) {
		puts("vazia");
		return -1;

	}
	
	else {
			
		if (h->itens[pos] == NULL) {
			puts("nao existe");
			return -1;
		}
			}
	*k= *(h->itens[pos]);

	return pos;
	
	}


void imprime(hash *h) {
	
	int i;
	for (i = 0; i < h->tamanho; i++) {
		if(h->itens[i]!=NULL){
			printf("%d\n", h->itens[i]->info);
		}

	}


}

void removeHash(hash*h, chave k) {
	chave aux;
	int pos;
	pos = busca_sc(h, k.info, &aux);

	if (h == NULL) {
		puts("hash vazia");
	}
	else {
		if (pos == -1){
			puts("o item nao existe");
		}
		else {
			if (h->itens[pos]->info == k.info) {
				free(h->itens[pos]);
				h->itens[pos] = NULL;
				h->qtd--;
			}
		}
		


	}




}