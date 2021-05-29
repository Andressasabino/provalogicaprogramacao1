#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // variáveis sobre a pessoa
    float altura, peso, pesoIdeal, x;
    char sexo;

    // questão em si
    printf("3. QUESTÃO – ESTRUTURA DE DECISÃO – IF ELSE:\n");
    printf("Tendo como dados de entrada a altura, o sexo e o peso atual de uma pessoa, escreva um programa em C que calcule seu peso ideal, utilizando as fórmulas abaixo, e compare com o seu peso atual, mostrando as mensagens de “Você está XKg acima do seu peso ideal ”, “você está XKg abaixo do seu peso ideal” ou “Você está no seu peso ideal”, onde X é a quantidade de Kg acima ou abaixo do peso ideal.");
    
    // obtendo os dados
    printf("\nAltura (Em metros (m)): ");
    scanf("%f", &altura);
    fflush(stdin);
    printf("Sexo (M ou F): ");
    scanf("%c", &sexo);
    printf("Peso (Em kg): ");
    scanf("%f", &peso);

    // m = (72.7 * altura) - 58
    // f = (62.1 * altura) - 44.7

    // verificando o peso ideal
    if (sexo == 'M' || sexo == 'm')
    {
        pesoIdeal = (72.7 * altura) - 58;
    } else if (sexo == 'F' || sexo == 'f')
    {
        pesoIdeal = (62.1 * altura) - 44.7;
    }

    // verificando as condições do peso
    if (peso == pesoIdeal)
    {
        printf("Você está no seu peso ideal.");
    } else if (peso > pesoIdeal)
    {
        x = peso - pesoIdeal;
        printf("Você está a %.2fkg acima do seu peso ideal.", x);
    } else if (peso < pesoIdeal)
    {
        x = pesoIdeal - peso;
        printf("Você está a %.2fkg abaixo do seu peso ideal.", x);
    }
}
