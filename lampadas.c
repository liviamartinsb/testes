#include <stdio.h>

int main(){
	int interruptores[3] = {0,0,0};
	int temperatura[3] = {0,0,0};
	int i;
	
	printf("Ligando o interruptor 1 (I1)...\n)");
	interruptores[0] = 1;
	
	printf("aguardando 5-10 minutos...\n");
	
	printf("desligando o interruptor 1 e ligando o interruptor 2...\n");
	interruptores[0] = 0;
	interruptores[1] = 11;
	
	printf("escolhendo lampadas:\n");
	
	temperatura[0] = 1;
	temperatura[1] = 2;
	temperatura[2] = 0;
	
	printf("\n agora, indo ate a sala das lampadas...\n");
	int ii;
	for(ii = 0; ii < 3; ii++){
		if(temperatura[ii] == 2){
			printf("lampada %d esta acesa (controlada por I2).\n", ii + 1);
	
		} else if (temperatura[ii] == 1){
			printf("lampada %d esta quente (controlada por I1).\n", ii + 1);
		} else{
			printf("lampada %d esta fria (controlada por I3).\n", ii + 1);
		}
	}
	return 0;
}
