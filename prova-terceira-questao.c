#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // variáveis sobre a pessoa
    float altura, peso, imc, pesoIdeal, x;
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

    imc = peso / (altura * altura);
    // imc ideal = (24,9 + 18,5)/2 = 21,7
    // peso ideal = imc ideal * altura * altura

    printf("\nIMC: %.2f", imc);

    pesoIdeal = 21.7 * altura * altura;

    if (imc < 18.5)
    {
        x = pesoIdeal - peso;
        printf("\nVocê está %.2fkg abaixo do seu peso ideal.", x);
    } else if (imc >= 18.5 && imc <= 24.9)
    {
        printf("\nVocê está no seu peso ideal");
    } else if (imc > 24.9)
    {
        x = peso - pesoIdeal;
        printf("\nVocê está %.2fkg acima do seu peso ideal.", x);
    }
}