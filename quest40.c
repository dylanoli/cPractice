#include <stdio.h>
#include <stdlib.h>
#include "fatorialR.h"

int main()
{
    double num;
    printf("Digite um numero: ");
    scanf("%lf", &num);
    printf("!%.0lf = %lf", num, fatorialR(num));
    return 0;
}

