#include <stdio.h>
#include <math.h>

int main () {
	float n1;
	
	printf("escolha um numero: ");
	scanf("%f", &n1);
	
	if(n1 > 0) {
		printf("A raiz quadrada desse numero e: %.2f\nE o quadrado desse numero e: %.2f", (sqrt(n1)), pow(n1, 2));
	}else{
		printf("escolha um numero positivo");
	}	
}
