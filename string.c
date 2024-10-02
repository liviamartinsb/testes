#include <stdio.h>
#include <string.h>

int main(){
	char str[100];
	int cont = 0;
	
	printf("digite uma string: ");
		fgets(str, sizeof(str), stdin);
		
		int i = 0;
		for (i = 0; i < strlen(str); i++){
			if(str[i] == 'a'|| str[i] == 'A'){
				cont++;
			}
		}
		if (cont > 0){
			printf("A letra 'a' aparece %d vezes na string.\n", cont);
		} else {
			printf("A letra 'a' nao aparece na string.\n");
		}
		
		return 0;
}

