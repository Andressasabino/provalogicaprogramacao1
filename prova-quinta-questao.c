#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    printf("x=%d\n", x < 0 ? (x * -1) : x);
}