#include <stdio.h>
#define N 100

struct TUsuario {
	char username[50];
	char password[50];
};

int existeUsuario(struct TUsuario lista[], int dimension, struct TUsuario buscado);

int main() {
	struct TUsuario usuarios[N] = {{"jjperez", "1234"}, {"mmmartinez", "1234"}, {"lllopez", "28021993"}};
	int contador = 3;
	
	struct Usuario login;
	
	printf("Introduce tu usuario:\n");
	scanf("%s", login.ussername);
	printf("Introduce tu contraseña:\n");
	scanf("%s", login.password);
	
	// Invocar a la funcion
	
	return 0;
}

int existeUsuario(struct TUsuario lista[], int dimension, struct TUsuario buscado) {
	
	
}
