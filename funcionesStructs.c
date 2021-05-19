#include <stdio.h> 
#include <math.h>

struct complejo {
	float real;
	float imaginaria;
};

void imprimirComplejo(struct complejo c);
float modulo(struct complejo c);

int main() {
	struct complejo n = {3, 5};
	
	imprimirComplejo(n);
	
	printf("Modulo es = %f\n", modulo(n));
	
	return 0;
}


void imprimirComplejo(struct complejo c) {
	printf("%f %+f i\n", c.real, c.imaginaria);
}

float modulo(struct complejo c) {
	float m;
	m = sqrt(c.real*c.real+c.imaginaria*c.imaginaria);
	return m;
}
