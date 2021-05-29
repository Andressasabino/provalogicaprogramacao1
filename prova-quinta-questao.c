#include <stdio.h>

int main()
{
    printf("5. QUESTÃO – ESTRUTURA DE DECISÃO – OPERADOR ? (1,0 PONTO):\n");
    printf("O programa abaixo deveria mostrar o valor absoluto ou módulo de um determinado número fornecido pelo usuário. \nExemplo: se x = -3, o programa deve mostrar resultado 3. Corrija o erro deste programa.\n");
 
    int x;
    scanf("%d", &x);
    printf("x=%d\n", x < 0 ? (x * -1) : x);
}
