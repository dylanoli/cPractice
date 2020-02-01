#include <stdlib.h>
#include <stdio.h>
#include "arrayHandle.c"
#define SIZE 20
void quickSort(Element * vetSort, int start, int end);
int main()
{
    Element vet [SIZE];
    Element vetSort[SIZE];

    vetorGenerate(SIZE,vet); //gerando numeros aleatorios para o vetor
    arrayCopy(SIZE,vet,vetSort); //fazendo uma copia do vetor gerado

    quickSort(vetSort,0,SIZE-1);
    showVetor(SIZE,vet);
    printf("\n\n");
    showVetor(SIZE,vetSort);
}

void quickSort(Element * vetSort, int start, int end)
{
    int i = start;
    int j = end;
    Element pivot = vetSort[(start + end)/2];
    while (i<j)
    {
        while (vetSort[i].id < pivot.id)
        {
            i++;
        }
        while (vetSort[j].id > pivot.id)  
        {
            j--;
        }
        if (i <= j)
        {
            Element temp = vetSort[i];
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