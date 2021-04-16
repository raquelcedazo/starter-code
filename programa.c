#include <stdio.h>
#define N 100

struct punto{
	int x;
	int y;
};

struct recta {
	struct punto p1;
	struct punto p2;
};

int main() {
	
	FILE *fichero;
	int puntos, i, contador1=0;
	struct punto vector[N];
	
	fichero = fopen("puntos.txt", "r");
	if (fichero == NULL) {
		printf("Error, el fichero no existe\n");
		return 0;
	}
	
	fscanf(fichero, "%d", &puntos);
	i=0;

	while (i<puntos) {
		fscanf(fichero, "%d %d", &vector[i].x, &vector[i].y);
		printf("(%d, %d)\n", vector[i].x, vector[i].y);
		i++;
	}
	
	fclose(fichero);
	
	printf("Total de puntos: %d\n", puntos);
	
	// Contar los puntos del primer cuadrantee
	for (i=0; i<puntos; i++) {
		if (vector[i].x > 0 && vector[i].y > 0) {
			contador1++;
		}
	}
	printf("Puntos en el primer cuadrante: %d\n", contador1);
	
	return 0;
}
