#include "tabela.h"



int main() {

	hash *h = criahash(1427);
	chave key;
	key.info = 10;
	inserehash_sc(h,key);
	key.info = 15;
	inserehash_sc(h, key);
	key.info = 8;
	inserehash_sc(h, key);
	key.info = 20;
	inserehash_sc(h, key);

	imprime(h);
	puts("\n");
	chave busca;
	busca.info = 10;
	int x;
	//x = busca_sc(h, , &busca);
	//printf(" valor recuperado: %d\n", busca.info);
	//printf("posicao	|%d\n", x);
	removeHash(h, busca);
	imprime(h);
	


	system("pause");
	return 0;
}