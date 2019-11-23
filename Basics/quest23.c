#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "fatorial.h"

void calcRaizQuadrada();
void calcPotencia();
void calcFatorial();

int main()
{
    int option;
    do
    {
        printf("\n1 - potenciacao");
        printf("\n2 - raiz quadrada");
        printf("\n3 - fatorial");
        printf("\n0 - sair\n");
        printf("Digite uma opcao: ");
        scanf("%d", &option);
        switch(option)
        {
            case 1:
                calcPotencia();
                break;
            case 2:
                calcRaizQuadrada();
                break;
            case 3:
                calcFatorial();
                break;
            default:
                break;
        }
    } while (option);
    return 0;
}

void calcPotencia()
{
    double num;
    int expoent;
    printf("Digite um numero: ");
    scanf("%lf", &num);
    printf("Digite um expoente: ");
    scanf("%d", &expoent);
    printf("%.0lf^%d = %.2lf\n", num, expoent, pow(num,expoent));
}
void calcRaizQuadrada()
{
    double squareRoot;
    printf("Digite um numero: ");
    scanf("%lf", &squareRoot);
    printf("sqrt(%.0lf) = %.2lf", squareRoot, sqrt(squareRoot));
}
void calcFatorial()
{
    double num;
    printf("Digite um numero: ");
    scanf("%lf", &num);
    printf("!%.0lf = %.2lf", num, fatorial(num));
}