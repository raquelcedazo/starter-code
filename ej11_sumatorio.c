#include <stdio.h>

int sumatorio (int n, int a, int b) {
	int i, suma = 0;
	
	for (i=a; i<=b; i++) {
		suma += (n*i);
	}
	
	return suma;
	
}

int main() {
	int n, a, b;
	printf("%Introduce n, a y b\n");
	scanf("%d %d %d", &n, &a, &b);
	
	printf("%d\n", sumatorio(n, a, b));
	
	return 0;
}
