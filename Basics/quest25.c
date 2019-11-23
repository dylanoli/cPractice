#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &size);
    int* vetor = (int* )malloc(sizeof(int)*size);
    int i;
    for (i = 0; i < size; i++)
    {
        printf("Digite o valor do vetor[%d]: ",i);
        scanf("%d",&vetor[i]);
    }
    printf("\nVetor: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", vetor[i]);
    }    
}