#include <stdio.h>

// funcion 1 parametro int, devuelve la suma
int sumatorio(int n) {
	int i, suma=0;
	for (i=1; i<=n; i++) {
		suma = suma + i;
	}
	return suma;
}

int fact(int n) {
	int i, multi=1;
	for (i=1; i<=n; i++) {
		multi = multi * i;
	}
	return multi;
}

int main() {
	
	int n;
	
	printf("Introduce n:\n");
	scanf("%d", &n);
	
	printf("%f\n", (float)sumatorio(n)/fact(n));	
	
	return 0;
}
