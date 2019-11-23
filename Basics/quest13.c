#include <stdio.h>
#include <stdlib.h>
int main()
{
    float average;
    printf("Digite a sua media: ");
    scanf("%f",&average);
    if (average>=7)
    {
        printf("Voce foi aprovado!");
    }
    else
    {
        printf("Voce foi reprovado!");
    }
    return 0;
}