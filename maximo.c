#include <stdio.h>

int pedirNumero() {
	int n;
	do {
		printf("Introduce el valor de un numero.\n");
		scanf("%d", &n);
	} while (n<0);
	return n;
}

// Funcion para calcular el maximo de 2 numeros

int maximo2numeros(int n1, int n2) {
	if (n1 > n2) {
		return n1;
	} else {
		return n2;
	}
}

int maximo3numeros(int n1, int n2, int n3) {
	int max;
	
	max = maximo2numeros(n1, n2); // --> con esto calculo el max entre n1 y n2
	max = maximo2numeros(max, n3); // --> con esto calcula el max entre el resultado anterior y n3
	
	return max;
}

int main() {
	
	int a, b, c;
	
	a = pedirNumero();
	b = pedirNumero();
	c = pedirNumero();
	
//	printf("Maximo es %d\n", maximo2numeros(a, b));
	
	printf("Maximo de %d, %d y %d = %d\n", a, b, c, maximo3numeros(a, b, c));       
	
	return 0;
}
