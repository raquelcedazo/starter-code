#include <stdio.h>

int contarLetraEnCadena(char texto[], char letra);

int main() {

	char cadena[50];
	char letra;
	
	printf("Introduce la cadena de caracteres:\n");
	gets(cadena);
	
	printf("Introduce la letra a buscar:\n");
	fflush(stdin);
	scanf("%c", &letra);
	
	// Cuantos caracteres que coinciden con una letra hay en la cadena
	printf("La letra %c aparece %d veces\n", letra, contarLetraEnCadena(cadena, letra));
	
	puts(cadena);
	
	printf("Introduce la letra a buscar:\n");
	fflush(stdin);
	scanf("%c", &letra);
	
	// Cuantos caracteres que coinciden con una letra hay en la cadena
	printf("La letra %c aparece %d veces\n", letra, contarLetraEnCadena(cadena, letra));
	
	puts(cadena);
	
	return 0;
}

int contarLetraEnCadena(char texto[], char letra) {
	int i=0;
	int contador=0;
	
	while (texto[i]!='\0') {
		if (texto[i] == letra) {
			contador++;
			texto[i]='*';
		}
		i++;
	}
	
	letra='*'; // ESTO NO CAMBIA EL VALOR DE LETRA DEL MAIN
	
	return contador;
}
