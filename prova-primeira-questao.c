#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // variáveis da primeira questão (item 1)
    int x1, y1, i1, j1, c1;
    // variáveis da primeira questão (item 2)
    float x2, y2, i2, j2;
    // variáveis da primeira questão (item 3)
    int a3, b3, c3, d3;

    // expressões da primeira questão (item 1)
    x1 = (2.57 + 1) * 6;
    y1 = (5 + 1.9) / 2 * 3;
    i1 = j1 = (2 + 3) / 4;
    c1 = 5 + 10 % 4 / 2;
    
    // expressões da primeira questão (item 2)
    x2 = (2.57 + 1) * 6;
    y2 = (5 + 1.9) / 2 * 3;
    i2 = j2 = (2 + 3) / 4;

    // expressões da primeira questão (item 3)
    a3 = !1 > 2;
    b3 = !(1 > 2);
    c3 = !(-5);
    d3 = 'j' != 'j' == 'j';

    printf("1. QUESTÃO – OPERADORES E EXPRESSÕES EM C:\n");
    printf("1.1 Supondo que todas as variáveis são do tipo int, encontre o valor de cada uma das expressões a seguir:\n");
    printf("a. x = %d\n", x1);
    printf("b. y = %d\n", y1);
    printf("c. i = j = %d\n", i1);
    printf("d. c = %d\n\n", c1);

    printf("1.2 Supondo agora que todas as variáveis são do tipo float, encontre o valor de cada uma das expressões a seguir:\n");
    printf("a. x = %.2f\n", x2);
    printf("b. y = %.2f\n", y2);
    printf("c. i = j = %.2f\n\n", i2);

    printf("1.3 Qual é o valor resultante de cada uma das seguintes expressões?\n");
    printf("a. %d\n", a3);
    printf("b. %d\n", b3);
    printf("c. %d\n", c3);
    printf("d. %d\n\n", d3);

    printf("1.4 Escreva expressões equivalentes sem usar o operador de negação (!):\n");
    printf("a. i != j\n");
    printf("b. i + 1 > j - 2\n");
    printf("c. i > j && n > m\n");
    printf("d. !(i < 1 || j < 2 && n < 3)\n\n");
}