#include <stdio.h>
#define N 100

struct persona{
	int puntuacion;
	char nombre[50];
};

int main() {
	FILE * fentrada;
	FILE * fsalida;
	struct persona vector[N];
	int i, j;
	
	fentrada = fopen ("entrada.txt", "r");
	if (fentrada == NULL) {
		printf("Error en la apertura de ficheros\n");
		return 0;
	}
	i=0;
	while (fscanf(fentrada, "%d %s", &vector[i].puntuacion, vector[i].nombre) != EOF) {
		i++;
	}
	fclose(fentrada);
	
	for(j=0; j<i; j++) {
		printf("%d %s\n", vector[j].puntuacion, vector[j].nombre);
	}
	
	fsalida = fopen("salida.txt", "w");
	if (fsalida == NULL) {
		printf("Error en la apertura de ficheros\n");
		return 0;
	}
	
	for(j=0; j<i; j++) {
		fprintf(fsalida, "%s = %d\n", vector[j].nombre, vector[j].puntuacion);
	}
	
	fclose(fsalida);
	
	return 0;
}
