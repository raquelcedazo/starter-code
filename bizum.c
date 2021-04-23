#include <stdio.h>
#include <string.h>
#define N 300

struct CuentaETSIDI {
	char nmatricula[10];
	float saldo;
};

int main() {
	struct CuentaETSIDI estudiantes[N]; // = {{"g180111", 80}, {"h190123", 6}, {"h190198", 75.30}};
	int opcion, i, contador;
	char usuario[10], compi[10];
	float cantidad;
	FILE * fichero;
	
	// Al arrancar el programa --> lee el archivo y se cargan los datos en memoria
	fichero = fopen("bizumetsidi.txt", "r");
	if (fichero == NULL) {
		printf("No existe el archivo\n");
		return 0;
	}
	i= 0;
	while (fscanf(fichero, "%s %f", estudiantes[i].nmatricula, &estudiantes[i].saldo) != EOF) {
		i++;
	}
	contador = i; // contador de numero de estudiantes
	
	fclose(fichero);
	
	// PROGRAMA	
	printf("Introduce tu numero de matricula:\n");
	scanf("%s", usuario);
	
	do {
		printf("BIZUM ETSIDI: \n1: Recargar salgo. \n2: Pago entre compis. \n3: Ver mi saldo.\n4: Salir\n");
		scanf("%d", &opcion);
		
		if (opcion == 1) {
			printf("Vamos a recargar el saldo\n");
			printf("Introduzca la cantidad de recarga:\n");
			scanf("%f", &cantidad);
			for (i=0; i<contador; i++) {
				if (strcmp(estudiantes[i].nmatricula, usuario) == 0) {
					estudiantes[i].saldo += cantidad;
				}
			}
		}
		else if (opcion == 2) {
			printf("Vamos a hacer el pago entre compis\n");
			printf("Introduzca la matricula de tu compi:\n");
			scanf("%s", compi);
			printf("Introduzca la cantidad a pagar al compi:\n");
			scanf("%f", &cantidad);
			for (i=0; i<contador; i++) {
				if (strcmp(estudiantes[i].nmatricula, usuario) == 0) {
					estudiantes[i].saldo -= cantidad;
				}
				if (strcmp(estudiantes[i].nmatricula, compi) == 0) {
					estudiantes[i].saldo += cantidad;
				}
			}
		}
		else if (opcion == 3) {
			printf("Ver mi saldo\n");
			for (i=0; i<contador; i++) {
				if (strcmp(estudiantes[i].nmatricula, usuario) == 0) {
					printf("Mi saldo: %.2f\n", estudiantes[i].saldo);
				}
			}
		}
		else if (opcion == 4) {
			printf("Saliendo del programa");
			// return 0;
		}
		else {
			printf("No se ha escogido una opcion correcta\n");
		}
	} while (opcion != 4);
	
	// Antes de salir del programa, se guardan los datos en el archivo
	fichero = fopen("bizumetsidi.txt", "w");
	if (fichero == NULL) {
		printf("No existe el archivo\n");
		return 0;
	}
	for (i=0; i<contador; i++) {
		fprintf(fichero, "%s %.2f\n", estudiantes[i].nmatricula, estudiantes[i].saldo);
	}
	fclose(fichero);
	
	return 0;
}
