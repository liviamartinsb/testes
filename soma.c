#include <stdio.h>

int main(){
	int indice = 12, soma = 0, k = 1;
	while (k < indice ){
		k = k + 1;
		soma = soma + k;
	}
	printf("o valor final da soma e: %d\n", soma);
	return 0;
}

