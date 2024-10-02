#include <stdio.h>

int main(){
	int a = 1, a_next = a + 2 * 4;
	printf("a) proximo elemento: %d\n", a_next);
	

int b = 2;
int b_next = b << 6;
	printf("b) proximo elemento: %d\n", b_next);
	
	

int c_next = 7 * 7;
	printf("c) proximo elemento: %d\n", c_next);
	
	
	
int d_next = 10 *10;
	printf("d) proximo elemento: %d\n", d_next);
	
	
	int e_prev = 5, e_curr = 8;
int e_next = e_prev + e_curr;
	printf("e) proximo elemento: %d\n", e_next);
	
	
	int f_last = 19;
	int f_next = f_last + 1;
	printf("f) proximo elemento: %d\n", f_next);
	
	
	return 0;
	}
