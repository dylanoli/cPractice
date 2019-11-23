#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    int sizeColumn;
    printf("Digite o tamanho da coluna: ");
    scanf("%d", &sizeColumn);
    int** matriz = (int** )malloc(sizeof(int*)*sizeColumn);

    int sizeRow;
    printf("Digite o tamanho da linha: ");
    scanf("%d", &sizeRow);

    for (i = 0; i < sizeColumn; i++)
    {
        matriz[i] = (int* )malloc(sizeof(int)*sizeRow);
    }
    
    int j;
    for (i = 0; i < sizeColumn; i++)
    {
        for (j = 0; j < sizeRow; j++)
        {
            printf("Digite o valor da %d,%d: ",i,j);
            scanf("%d",&matriz[i][j]);
        }       
    } 
    for (i = 0; i < sizeColumn; i++)
    {
        for (j = 0; j < sizeRow; j++)
        {
            printf("%d ", matriz[i][j]);
        } 
        printf("\n");      
    }  
}