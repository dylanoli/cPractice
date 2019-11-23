#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vetor[3][3];
    int i;
    int j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite o valor da %d,%d: ",i,j);
            scanf("%d",&vetor[i][j]);
        }       
    } 
    
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", vetor[i][j]);
        }
        printf("\n");
        
    }    
}