#include <stdlib.h>
#include <stdio.h>
#include "arrayHandle.c"
#define SIZE 20
void bubble(Element * vetSort);
int main()
{
    Element vet [SIZE];
    Element vetSort[SIZE];

    vetorGenerate(SIZE,vet); //gerando numeros aleatorios para o vetor
    arrayCopy(SIZE,vet,vetSort); //fazendo uma copia do vetor gerado

    bubble(vetSort);
    showVetor(SIZE,vet);
    printf("\n\n");
    showVetor(SIZE,vetSort);
}

void bubble(Element * vetSort)
{
    int i, j;
    for ( i = 0; i < SIZE-1; i++)
    {
        for (j = 0; j < SIZE-1; j++)
        {
            if (vetSort[j].id>vetSort[j+1].id)
            {
                Element temp = vetSort[j];
                vetSort[j] = vetSort[j+1];
                vetSort[j+1] = temp;
            }
            
        }
        
    }
}