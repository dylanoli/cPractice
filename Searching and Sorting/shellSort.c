#include <stdlib.h>
#include <stdio.h>
#include "arrayHandle.c"
#define SIZE 20
void shellSort(int * vetSort);
int main()
{
    int vet [SIZE];
    int vetSort[SIZE];

    vetorGenerate(SIZE,vet); //gerando numeros aleatorios para o vetor
    arrayCopy(SIZE,vet,vetSort); //fazendo uma copia do vetor gerado

    shellSort(vetSort);
    showVetor(SIZE,vet);
    printf("\n\n");
    showVetor(SIZE,vetSort);
}

void shellSort(int * vetSort)
{
    int h;
    while (h < SIZE)
    {
        h = 3*h+1;
    }
    while (h>1)
    {
        h = h/3;
        for (int i = h; i < SIZE; i++)
        {
            int pivot = vetSort[i];
            int j = i-h;

            while ((j >= 0) && (pivot < vetSort[j]))
            {
                vetSort[j + h] = vetSort[j];
                j = j-h;
            }
            vetSort[j+h] = pivot;
        }
           
    }
    
}