#include <stdlib.h>
#include <stdio.h>
#include "arrayHandle.c"
#define SIZE 20
void shellSort(Element * vetSort);
int main()
{
    Element vet [SIZE];
    Element vetSort[SIZE];

    vetorGenerate(SIZE,vet); //gerando numeros aleatorios para o vetor
    arrayCopy(SIZE,vet,vetSort); //fazendo uma copia do vetor gerado

    shellSort(vetSort);
    showVetor(SIZE,vet);
    printf("\n\n");
    showVetor(SIZE,vetSort);
}

void shellSort(Element * vetSort)
{
    int h = 0;
    while (h < SIZE)
    {
        h = 3*h+1;
    }
    while (h>1)
    {
        h = h/3;
        for (int i = h; i < SIZE; i++)
        {
            Element pivot = vetSort[i];
            int j = i-h;

            while ((j >= 0) && (pivot.id < vetSort[j].id))
            {
                vetSort[j + h] = vetSort[j];
                j = j-h;
            }
            vetSort[j+h] = pivot;
        }
           
    }  
}