#include <stdio.h>

struct Testudiante {
	char nombre[100];
	float nota;
};

float calcularMedia(struct Testudiante clase[], int dimension);
void mejorAlumno (struct Testudiante clase[], int dimension);

int main() {
	struct Testudiante vector[100] = {{"Carla", 8.5},{"Juan", 8.0},{"Marcos", 7.0}};
	int contador = 3; // contador es el tamaño del vector, de la clase
	
	printf("Media = %f\n", calcularMedia(vector, 3));
	
	mejorAlumno(vector, 3);
	
	return 0;
}

void mejorAlumno (struct Testudiante clase[], int dimension) {
	struct Testudiante mejor;
	int i;
	
	mejor = clase[0];
	for (i=1; i<dimension; i++) {
		if (clase[i].nota > mejor.nota) {
			mejor = clase[i];
		}
	}
	
	printf("Los datos del alumno con la mejor nota son: %s %.1f\n", mejor.nombre, mejor.nota);
	
}

float calcularMedia(struct Testudiante clase[], int dimension) {
	float media = 0;
	int i;
	for (i=0; i<dimension; i++) {
		media += clase[i].nota;
	}
	return (media / dimension);
}
