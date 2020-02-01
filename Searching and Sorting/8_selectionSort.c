#include <stdlib.h>
#include <stdio.h>
#include "arrayHandle.c"
#define SIZE 20
void selection(Element * vetSort);
int main()
{
    Element vet [SIZE];
    Element vetSort[SIZE];

    vetorGenerate(SIZE,vet); //gerando numeros aleatorios para o vetor
    arrayCopy(SIZE,vet,vetSort); //fazendo uma copia do vetor gerado

    selection(vetSort);
    showVetor(SIZE,vet);
    printf("\n\n");
    showVetor(SIZE,vetSort);
}

void selection(Element * vetSort)
{
    for (int i = 0; i < SIZE; i++)
    {
        int small = i;
        for (int j = i+1; j < SIZE; j++)
        {
            if (vetSort[j].id < vetSort[small].id)
            {
                small = j;
            }
            
        }
        if (i != small)
        {
            Element temp = vetSort[i];
            vetSort[i] = vetSort[small];
            vetSort[small] = temp;
        }
    }
}