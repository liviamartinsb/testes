#include <stdio.h>

int pertence_Fibonacci(int numero){
int a = 0, b = 1, temp;

if(numero == 0 || numero == 1){
	
}

while (b <= numero){
	if(b == numero){
		return 1;
	}
	temp = b;
	b = a + b;
	a = temp;
}
return 0;
}

int main(){
	int numero;
	
	printf("Informe um numero:");
	scanf("%d", &numero);
	
	if (pertence_Fibonacci(numero)){
		printf("o numero %d pertence a sequencia de Fibonacci.\n ", numero);
	} else {
		printf("o numero %d não pertence a sequencia de Fibonacci.\n ", numero);
	}
	return 0;
}

