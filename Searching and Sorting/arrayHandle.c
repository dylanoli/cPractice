#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>   
void showVetor(int lines, int* vet);
void vetorGenerate(int lines, int* vet);

void arrayCopy(int lines, int * src,int * target);

void showVetor(int lines, int* vet)
{
    int i;
    for ( i = 0; i < lines; i++)
    {
        printf("[%d] ",vet[i]);        
    }    
}
void vetorGenerate(int lines, int* vet)
{
    int i;
    srand(time(NULL));
    for ( i = 0; i < lines; i++)
    {
        vet[i] = rand()%(lines);        
    }
    
}
void arrayCopy(int lines, int * src,int * target)
{
    int i;
    for (i = 0; i < lines; i++)
    {
        target[i] = src[i];
    }
    
}

