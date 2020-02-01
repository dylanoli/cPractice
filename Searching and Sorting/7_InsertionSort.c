#include <stdlib.h>
#include <stdio.h>
#include "arrayHandle.c"
#define SIZE 20
void Insertion(Element * vetSort);
int main()
{
    Element vet [SIZE];
    Element vetSort[SIZE];

    vetorGenerate(SIZE,vet); //gerando numeros aleatorios para o vetor
    arrayCopy(SIZE,vet,vetSort); //fazendo uma copia do vetor gerado

    Insertion(vetSort);
    showVetor(SIZE,vet);
    printf("\n\n");
    showVetor(SIZE,vetSort);
}

void Insertion(Element * vetSort)
{
    int j;
    for (int i = 1; i < SIZE; i++)
    {
        Element ref = vetSort[i];
        j = i-1;
        while ((j>=0) && ref.id < vetSort[j].id)
        {
            vetSort[j+1] = vetSort[j];
            j--;
        }
        vetSort[j+1] = ref;
    }
}