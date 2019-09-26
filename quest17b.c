#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numStart, numEnd;
    printf("Digite um numero inicial: ");
    scanf("%d", &numStart);
    printf("Digite um numero final: ");
    scanf("%d", &numEnd);
    int i = numStart;
    do
    {
        printf("%d ",i);
        i++; 
    }
    while(i<=numEnd);
    return 0;
}