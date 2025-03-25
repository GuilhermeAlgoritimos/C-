#include <stdio.h>
#include <locale.h>

#define MAX_USUARIOS 200
#define TAM_STRING 1000 // Tamanho máximo para as strings

struct DadosUsuarios
{
    char nome[TAM_STRING];
    int idade;
    float altura;
    int diaNascimento;
    int mesNascimento;
    int anoNascimento;
    char sexo;
    char estadoCivil[TAM_STRING];
    char nacionalidade[TAM_STRING];
    char curso[TAM_STRING];
    char matricula[TAM_STRING];
    char endereco[TAM_STRING];
    char materiais[TAM_STRING];
};

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numUsuarios;
    int i;
    struct DadosUsuarios usuarios[MAX_USUARIOS]; // Array de structs

    printf("Digite o número de usuários que deseja cadastrar: ");
    scanf("%d", &numUsuarios);
    getchar(); // Consome a nova linha

    if (numUsuarios > MAX_USUARIOS) {
        printf("Número de usuários excede o máximo permitido.\n");
        return 1; // Indica erro
    }

    // Leitura de dados de cada usuário
    for (i = 0; i < numUsuarios; i++)
    {
        printf("\n======== Dados do Usuário %d ========\n", i + 1);

        printf("Nome: ");
        scanf("%[^\n]", usuarios[i].nome);
        getchar();

        printf("Idade: ");
        scanf("%d", &usuarios[i].idade);
        getchar(); // Consome a nova linha

        printf("Altura: ");
        scanf("%f", &usuarios[i].altura);
        getchar(); // Consome a nova linha

        printf("Data de nascimento (dd mm aaaa): ");
        scanf("%d %d %d", &usuarios[i].diaNascimento, &usuarios[i].mesNascimento, &usuarios[i].anoNascimento);
        getchar(); // Consome a nova linha

        printf("Sexo (M/F): ");
        scanf("%c", &usuarios[i].sexo);
        getchar();

        printf("Estado Civil: ");
        scanf("%[^\n]", usuarios[i].estadoCivil);
        getchar();

        printf("Qual o curso?: ");
        scanf("%[^\n]", usuarios[i].curso);
        getchar();

        printf("Matricula: ");
        scanf("%[^\n]", usuarios[i].matricula);
        getchar();

        printf("Endereço: ");
        scanf("%[^\n]", usuarios[i].endereco);
        getchar();

        printf("Materiais: ");
        scanf("%[^\n]", usuarios[i].materiais);
        getchar();
    }

    return 0; // Indica sucesso
}
