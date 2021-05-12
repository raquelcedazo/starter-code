#include <stdio.h>

// Prototipos de las funciones
float calcularMediaVector(int v[], int dim);  // float calcularMediaVector(int * v, int dim);
// PASO POR REFERENCIA --> PASO UNA DIRECCION DE MEMORIA
int maximoVector(int v[], int dimension);

void sumarEscalarVector(int v[], int dim, int escalar);

// Main
int main() {
	
	int v1[5] = {1, 2, 3, 4, 5}, v2[6] = {0, 1, 2, 1, 2, 0};
	int i;

	// Devolver la media de v1
	printf("Media v1: %f\n", calcularMediaVector(v1, 5));
	
	// Devolver la media de v2
	printf("Media v2: %f\n", calcularMediaVector(v2, 6));
	
	// Devolver el maximo de v1 
	printf("Maximo v1: %d\n", maximoVector(v1, 5));
	
	// Devolver el maximo de v2
	printf("Maximo v2: %d\n", maximoVector(v2, 6));
	
	// IMPRIMIR EL VECTOR V1 ANTES DE LLAMAR A LA FUNCION SUMAR ESCALAR
	for (i=0; i<5; i++) {
		printf("%d\t", v1[i]);
	}
	printf("\n");
	
	sumarEscalarVector(v1, 5, 3);
	
	// IMPRIMIR EL VECTOR V1 DESPUES DE LLAMAR A LA FUNCION SUMAR ESCALAR
	for (i=0; i<5; i++) {
		printf("%d\t", v1[i]);
	}	
	
	
	return 0;
}

// Otras funciones
float calcularMediaVector(int v[], int dim) {
	float media = 0;
	int i;
	for (i=0; i<dim; i++) {
		media += v[i];
	}
	return (media / dim);
}

int maximoVector(int v[], int dimension) {
	int maximo, i;
	maximo = v[0];
	for (i=1; i<dimension; i++) {
		if (v[i]> maximo)
			maximo = v[i];
	}
	return maximo;
}

void sumarEscalarVector(int v[], int dim, int escalar) {
	int i;
	for (i=0; i<dim; i++) {
		v[i] = v[i]+escalar; // MODIFICA LA DIRECCION DE MEMORIA
	}
}



