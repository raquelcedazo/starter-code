#include <stdio.h>

// Imprimir por pantalla la asignatura y su informacion de la que tiene mayor porcentaje de aprobados
struct asignatura {
	char nombreAsignatura[100];
	int nmatriculados, naprobados;
};

int main() {
	FILE * fentrada;
	struct asignatura listado[100];
	struct asignatura mejor;
	int i, j;
	float porcentaje;
	
	fentrada = fopen ("asignaturas.txt", "r");
	if (fentrada == NULL) {
		printf("Error en la apertura de ficheros\n");
		return 0;
	}
	while (fscanf(fentrada, "%s %d %d", listado[i].nombreAsignatura, &listado[i].nmatriculados, &listado[i].naprobados) != EOF) {
		i++;
	}
	fclose(fentrada);
	
	// Ver cual es la asignatura con mejor porc de aprobados
	mejor = listado[0];
	porcentaje = (float)listado[0].naprobados/listado[0].nmatriculados;
	for (j=1; j<i; j++) {
		if (((float)listado[j].naprobados/listado[j].nmatriculados) > porcentaje)
			mejor = listado[j];
			porcentaje = (float)listado[j].naprobados/listado[j].nmatriculados;
	}
	
	printf("%s %d %d %.4f\n", mejor.nombreAsignatura, mejor.nmatriculados, mejor.naprobados, porcentaje*100);
	
	return 0;
}
