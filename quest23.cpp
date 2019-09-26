#include <stdio.h>
#include <stdlib.h>

double fatorial(double num);

int main()
{
    double num;
    printf("Digite um numero: ");
    scanf("%lf", &num);
    printf("!%.0lf = %lf", num, fatorial(num));
    return 0;
}

double fatorial(double num)
{
    double fatNum = 1;
    int i;
    for (i = 0; i < num; i++)
    {
        fatNum *= (num-i);
    }
    return fatNum;   
}