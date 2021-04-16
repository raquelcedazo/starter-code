#include <stdio.h>
#define N 100

struct punto{
	int x;
	int y;
};

int main() {
	
	FILE *fichero;
	int puntos, i;
	struct punto vector[N];
	
	fichero = fopen("puntos.txt", "r");
	if (fichero == NULL) {
		printf("Error, el fichero no existe\n");
		return 0;
	}
	
	fscanf(fichero, "%d", &puntos);
	i=0;
	// EOF End Of File
	while (i<puntos) {
		fscanf(fichero, "%d %d", &vector[i].x, &vector[i].y);
		printf("(%d, %d)\n", vector[i].x, vector[i].y);
		i++;
	}
	
	fclose(fichero);
	
	printf("Total de puntos: %d\n", puntos);
	
	return 0;
}
