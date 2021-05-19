#include <stdio.h>
#define N 100

struct TUsuario {
	char username[50];
	char password[50];
};

int existeUsuario(struct TUsuario lista[], int dimension, struct TUsuario buscado);

int main() {
	struct TUsuario usuarios[N] = {{"jjperez", "1234"}, {"mmmartinez", "1234"}, {"lllopez", "28021993"}};
	int contador = 3, resultado;
	
	struct TUsuario login;
	
	printf("Introduce tu usuario:\n");
	scanf("%s", login.username);
	printf("Introduce tu contraseña:\n");
	scanf("%s", login.password);
	
	// Invocar a la funcion
	resultado = existeUsuario(usuarios, contador, login);
	
	if (resultado == 1) {
		printf("Genial, bienvenido a la aplicacion\n");
	} else {
		printf("No tienes permisos para entrar a la aplicacion\n");
	}
	
	return 0;
}

int existeUsuario(struct TUsuario lista[], int dimension, struct TUsuario buscado) {
	int i;
	for (i=0; i<dimension; i++) {
		if ((strcmp(lista[i].username, buscado.username) == 0) && (strcmp(lista[i].password, buscado.password)==0)) {
			return 1; // devuelve 1, verdadero 
		}
	}
	return 0; // devuelve falso
}
