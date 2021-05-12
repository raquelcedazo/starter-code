#include <stdio.h>
#include <string.h>
#include <math.h>
#define PI 3.14159

// int strcmp(char * cadena1, char * cadena2); Prototipo
// double sqrt (double _X);
// void funcion(void);
// void funcion();
// struct TEstudiante funcion(...);

// PROHIBIDO EL USO DE VARIABLES GLOBALES
// float a;

// Mis funciones
float calcularAreaCircunferencia(float radio) {
	float area; // VARIABLE LOCAL
	area = radio * radio * PI;
	return area;
}

float calcularPerimetroCircunferencia(float r) {
	return 2 * PI * r;
}

void imprimirBanner() {
	printf("-----------------------------------------------------\n");
	printf("---------------XXXXX---------------------------------\n");
	printf("--------------X-----X--------------------------------\n");
	printf("-------------X-------X-------------------------------\n");
	printf("--------------X------X-------------------------------\n");
	printf("---------------X----X--------------------------------\n");
	printf("----------------XXXX---------------------------------\n");
	printf("-----------------------------------------------------\n");
}

char menu() { 
	char opcion;
	printf("-- MENU DE OPCIONES --\n");
	printf("-- Pulse A para calcular el area --\n");
	printf("-- Pulse P para calcular el perimetro --\n");
	fflush(stdin);
	scanf("%c", &opcion);
	return opcion;
}

// HOY: paso por valor (libro tema 6 hasta el punto 6.4.1)
// Pasamos datos simples como parametros de la funcion: float, char, int

int main() {
	
	float area, radio, perimetro; // VARIABLE LOCAL AL MAIN
	char opcion;
	
	printf("------------------------------------------------------------\n");
	printf("-- BIENVENIDO: ES LA CALCULADORA DE CIRCUNFERENCIAS --------\n");
	printf("------------------------------------------------------------\n");
	
	do {
		imprimirBanner();
		
		opcion = menu();
		
		printf("Introduce el radio de la circunferencia:\n");
 		scanf("%f", &radio);
 		
 		if (opcion == 'A') {
 			area = calcularAreaCircunferencia(radio);
 			printf("Area: %f\n", area);
		} else if (opcion == 'P') {
			printf("Perimetro: %f\n", calcularPerimetroCircunferencia(radio));
		}
		
		printf("Quieres hacer otro calculo: s o n\n");
		fflush(stdin);
		scanf("%c", &opcion);
	} while (opcion != 'n');
	
	printf("------------ VUELVE PRONTO A LA CALCULADORA -------------\n");
	imprimirBanner();
	
	return 0;
}
