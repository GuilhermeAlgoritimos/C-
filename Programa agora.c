#include <studio.h>

int main() {
	char linha[100]; // Declara um array de caracteres com espaço para 99 caracteres
	
	printf("Digite um linha de texto: ");
	scanf("%[^\n]", linha);
	
	printf("Você digitou: %s\n", linha);
	
	return 0:
}

