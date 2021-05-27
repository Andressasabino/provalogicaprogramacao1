#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // variáveis dos catetos e da hipotenusa
    float cateto1, cateto2, hipotenusa;

    printf("2. QUESTÃO – ESTRUTURA SEQUENCIAL:\n");
    printf("2.2 Sejam a e b os catetos de um triângulo, onde a hipotenusa é obtida pela equação: hipotenusa = sqrt(a**2 + b**2). Faça um programa que receba os valores de a e b e calcule o valor da hipotenusa através da equação. Imprima o resultado dessa operação.\n");
    
    // obtendo os valores através do console
    printf("\nValor do cateto 1: ");
    scanf("%f", &cateto1);
    printf("Valor do cateto 2: ");
    scanf("%f", &cateto2);

    // aplicando a fórmula da hipotenusa sqrt(cateto1**2 + cateto2**2)
    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

    printf("\nHipotenusa: %.2f\n", hipotenusa);
}