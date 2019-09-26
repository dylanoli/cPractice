#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numStart, numEnd;
    printf("Digite um numero inicial: ");
    scanf("%d", &numStart);
    printf("Digite um numero final: ");
    scanf("%d", &numEnd);
    int i;
    for(i = numStart; i <= numEnd;i++)
    {
        printf("%d ",i);
    }
    return 0;
}