#include <stdio.h>

void cambiarOrdenVector(int v[], int dim);

int main() {
	int v[6] = {1, 3, 5, 7, 9, 11};
	int i;
	
	cambiarOrdenVector(v, 6);
	
	for (i=0; i<6; i++) {
		printf("%d\t", v[i]);
	}
}

void cambiarOrdenVector(int v[], int dim) {
	int aux, i;
	for (i= 0; i < dim/2; i++) {
		aux = v[i];
		v[i] = v[dim-1-i];
		v[dim-1-i]=aux;
	}
}
