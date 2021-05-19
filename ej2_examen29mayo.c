#include <stdio.h>

void ecuacionPuntoPendiente(float x, float y, float pendiente);
float funcionIntervalos(float x);

int main() {
	int opcion;
	float x, y, pendiente, x1;
	
	do {
		printf("Elija una opcion:\n");
		scanf("%d", &opcion);
		
		if (opcion == 1) {
			printf("Introduce un valor para x:\n");
			scanf("%f", &x1);
			printf("f(%.2f)=%f\n", x1, funcionIntervalos(x1));
		}
		else if (opcion == 2) {
			printf("Introduce x, y, pendiente:\n");
			scanf("%f %f %f", &x, &y, &pendiente);
			ecuacionPuntoPendiente(x, y, pendiente);
		}
		else if (opcion == 3){
			printf("Fin del programa\n");
		} 
		else {
			printf("Opcion incorrecta\n");
		}
	} while (opcion != 3);
	
	return 0;
}


void ecuacionPuntoPendiente(float x, float y, float pendiente) {
	float aux;
	aux = (-x*pendiente)+y;
	printf("y = %fx + %f\n", pendiente, aux);
}

float funcionIntervalos(float x) {
	float resultado;
	if (x <= -1) {
		resultado = (3*x*x)-1;
	} else if (-1<x && x<=2) {
		resultado = x+1;
	} else if (x > 2) {
		resultado = x*x;
	}
	return resultado;
}
