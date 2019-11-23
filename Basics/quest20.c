#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numStart, numEnd, sum = 0;
    printf("Digite um numero inicial: ");
    scanf("%d", &numStart);
    printf("Digite um numero final: ");
    scanf("%d", &numEnd);
    int i;
    for(i = numStart; i <= numEnd;i++)
    {
        sum += i;
    }
    printf("O resultado da soma: %d ",sum);
    return 0;
}