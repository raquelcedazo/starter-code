#include <stdio.h>

int entrada() {
	int n;
	do {
		printf("Introduce un numero:\n");
		scanf("%d", &n);
	} while (n <= 0);
	return n;
}

void asteriscos (int num) {
	int i;
	for (i=0; i<=num; i++) {
		printf("*");
		if (i==num) {
			printf("\n");
		}
	}
}

int main() {
	
	int n, i;
	
	n = entrada();
	
	for (i=0; i<=n; i++) {
		asteriscos(i);
	}

	return 0;	
}
