#include <studio.h>

int main() {
	char linha[100]; // Declara um array de caracteres com espa�o para 99 caracteres
	
	printf("Digite um linha de texto: ");
	scanf("%[^\n]", linha);
	
	printf("Voc� digitou: %s\n", linha);
	
	return 0:
}

