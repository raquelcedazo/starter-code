#include <stdio.h>

// funcion con 2 parametros int int 
int funcion(int a, int b) {
	return a*b-a-b;
}

int main() {
	
	int n, i;
	
	printf("Introduce un valor n:\n");
	scanf("%d", &n);
	
	for (i=0; i<=10; i++) {
		printf("%d --> %d\n", i, funcion(i, n));  // 0, n; 1, n; 2, n; .... 10, n
	}
	
	return 0;
}
