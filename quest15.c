#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    switch(num)
    {
        case 1:
            printf("Um");
            break;
        case 2:
            printf("Dois");
            break;
        case 3:
            printf("Tres");
            break;
        case 4:
            printf("Quatro");
            break;
        case 5:
            printf("Cinco");
            break;
        default:
            printf("Valor invalido!");
            break;
    }
    return 0;
}