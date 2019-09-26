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
    if (num>1)
    {
        num *= fatorial(num -1);
        return num;  
    }
    else
    {
        return 1;   
    }    
}