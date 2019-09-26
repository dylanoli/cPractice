#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vetor[] = {0,1,2,3,4,5,6,7,8,9};
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }
    int vetor2[10];
    for (i = 0; i < 10; i++)
    {
        vetor2[i] = vetor[10-i];
    }
    
    printf("\nvetor1[i]: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ",vetor[i]);
    }
    printf("\nvetor2[i]: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ",vetor2[i]);
    }

    
    
}



