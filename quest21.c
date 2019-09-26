#include <stdio.h>
#include <stdlib.h>
#include "fatorial.h"

int main()
{
    double num;
    printf("Digite um numero: ");
    scanf("%lf", &num);
    printf("!%.0lf = %lf", num, fatorial(num));
    return 0;
}

