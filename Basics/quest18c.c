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
        if (i%2)
        {
            printf("%d ",i);
        }
    }
    return 0;
}