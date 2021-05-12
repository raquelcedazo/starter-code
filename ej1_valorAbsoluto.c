#include <stdio.h>
#include <math.h>

int valorAbsoluto(int n) { // n = -6
	
	if (n < 0) {
		return (n * (-1));
	}
	else {
		return n;
	}
	
}

/*void valorAbsolutoV2() {
	int n;
	
	printf("Introduce un numero:\n");
	scanf("%d", &n);
		
	if (n < 0) {
		printf("%d\n", n * (-1));
	}
	else {
		printf("%d\n", n);
	}
	
}*/

int main() {
	
	int numero = -6;
	
	printf("Valor absoluto: %d\n", valorAbsoluto(numero));
	
	//valorAbsolutoV2();
	
	printf("%d\n", abs(numero)*2);
	
	return 0;
}
