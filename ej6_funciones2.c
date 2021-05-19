#include <stdio.h>
#include <string.h>

int numeroCaracteresSinEspacios(char frase[]);

int main() {
	
	char cadena[50];
	
	gets(cadena); // Holaque ttal estas, yo bien
	
	printf("Numero de caracteres sin espacios: %d\n", numeroCaracteresSinEspacios(cadena));
	
	printf("Cadena sin espacios: %s\n", cadena); // Holaquetalestas,yobien
	
	return 0;
}


int numeroCaracteresSinEspacios(char frase[]) {
	int i=0, longitud, j, numEspacios=0;
	
	longitud = strlen(frase);
	
	while(frase[i]!='\0') {
		if (frase[i] == ' ') {
			for(j=i; j<longitud-numEspacios; j++) {
				frase[j] = frase[j+1];
			}
			numEspacios++;
		}
		i++;
	}
	
	return (longitud - numEspacios);
	
}

