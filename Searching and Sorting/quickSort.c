#include <stdlib.h>
#include <stdio.h>
#include "arrayHandle.c"
#define SIZE 20
void quickSort(int * vetSort, int start, int end);
int main()
{
    int vet [SIZE];
    int vetSort[SIZE];

    vetorGenerate(SIZE,vet); //gerando numeros aleatorios para o vetor
    arrayCopy(SIZE,vet,vetSort); //fazendo uma copia do vetor gerado

    quickSort(vetSort,0,SIZE-1);
    showVetor(SIZE,vet);
    printf("\n\n");
    showVetor(SIZE,vetSort);
}

void quickSort(int * vetSort, int start, int end)
{
    int i = start;
    int j = end;
    int pivot = vetSort[(start + end)/2];
    while (i<j)
    {
        while (vetSort[i] < pivot)
        {
            i++;
        }
        while (vetSort[j] > pivot)  
        {
            j--;
        }
        if (i <= j)
        {
            int temp = vetSort[i];
            vetSort[i] = vetSort[j];
            vetSort[j] = temp;
            i++;
            j--;
        }
        if (j > start)
        {
            quickSort(vetSort,start,j);
        }
        if (i < end)
        {
            quickSort(vetSort,i,end);
        }   
    }
            
}