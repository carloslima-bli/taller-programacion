#include <stdio.h>
#include "sumar.h"

int main()
{
    int a,b;
    printf("ingrese 1er numero: ");
    scanf("%d", &a);
    printf("ingrese 2donumero: ");
    scanf("%d", &b);
    sumar(a,b);
    printf("la suma es: %d\n", sumar(a,b));

    return 0;
}