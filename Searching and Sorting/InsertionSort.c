#include <stdlib.h>
#include <stdio.h>
#include "arrayHandle.c"
#define SIZE 20
void Insertion(int * vetSort);
int main()
{
    int vet [SIZE];
    int vetSort[SIZE];

    vetorGenerate(SIZE,vet); //gerando numeros aleatorios para o vetor
    arrayCopy(SIZE,vet,vetSort); //fazendo uma copia do vetor gerado

    Insertion(vetSort);
    showVetor(SIZE,vet);
    printf("\n\n");
    showVetor(SIZE,vetSort);
}

void Insertion(int * vetSort)
{
    int j;
    for (int i = 1; i < SIZE; i++)
    {
        int ref = vetSort[i];
        j = i-1;
        while ((j>=0) && ref < vetSort[j])
        {
            vetSort[j+1] = vetSort[j];
            j--;
        }
        vetSort[j+1] = ref;
    }
}