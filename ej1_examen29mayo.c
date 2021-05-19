#include <stdio.h>

#define N 40

struct estado {
	char nombre[50];
	float poblacion; // numero de habitantes
	float superficie; // km^2
};

int main() {
	struct estado listado[N];
	int i, j, contador, encontrado;
	float media = 0.0;
	char letra;
	
	printf("Introduce el numero de estados:\n");
	scanf("%d", &contador);
	
	for (i=0; i<contador; i++) {   // Arizona, California, New York, Arizona (i=3)
		do {
				encontrado = 0;
				printf("Introduzca el nombre del estado %d:\n" ,i+1);
				fflush(stdin);
				gets(listado[i].nombre);
				for (j=0; j<i; j++) {
					if (strcmp(listado[i].nombre, listado[j].nombre) == 0) {
						encontrado = 1; // Se cambia a 1 cuando se encuentra una repeticion
					}
				}
				if (encontrado == 1) {
					printf("ERROR: el estado ya esta duplicado. Vuelva a intentarlo.\n");
				}
		} while(encontrado == 1);
		printf("Introduzca la poblacion del estado %d:\n", i+1);
		scanf("%f", &listado[i].poblacion);
		printf("Introduzca la superficie del estado %d:\n", i+1);
		scanf("%f", &listado[i].superficie);
	}
	
	for (i=0; i<contador; i++) { 
		media += listado[i].poblacion/listado[i].superficie;
		printf("%s: %.2f hab/km2\n", listado[i].nombre, listado[i].poblacion/listado[i].superficie);
	}
	
	printf("La densidad media de los 2 estados es: %.2f hab/km2\n", media/contador);
	
	return 0;
	
}
