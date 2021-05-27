#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // declarando variável
    char letra;

    printf("4. QUESTÃO – ESTRUTURA DE DECISÃO – SWITCH:");
    printf("\nReescreva as instruções abaixo usando o comando switch.\n");

    // obtendo a letra
    printf("Digite um caracter: ");
    scanf("%c", &letra);

    switch (letra)
    {
    case 'X':
        printf("Letra conhecida.");
        break;
    case 'Z':
        printf("Letra conhecida.");
        break;
    case 'A':
        printf("Letra conhecida.");
        break;
    default:
        printf("Letra desconhecida '%c'.\n", letra);
        break;
    }
}