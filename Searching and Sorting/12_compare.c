#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "arrayHandle.c"
#define SIZE 20000
void bubble(Element * vetSort);
void Insertion(Element * vetSort);
void selection(Element * vetSort);
void shellSort(Element * vetSort);
void quickSort(Element vetSort[], int start, int end);
int main()
{
    Element vet [SIZE];
    Element vetSort[SIZE];

    vetorGenerate(SIZE,vet); //gerando numeros aleatorios para o vetor

    clock_t start, end;
    double cpu_time_used;

    //QUICK SORT
    arrayCopy(SIZE,vet,vetSort); //fazendo uma copia do vetor gerado
    start = clock();
    quickSort(vetSort,0,SIZE-1);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("\nTempo com quick sort: %lf\n",cpu_time_used);

    //SHELL SORT
    arrayCopy(SIZE,vet,vetSort); //fazendo uma copia do vetor gerado
    start = clock();
    shellSort(vetSort);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("\nTempo com shell sort: %lf\n",cpu_time_used);

    //INSERTION SORT
    arrayCopy(SIZE,vet,vetSort); //fazendo uma copia do vetor gerado
    start = clock();
    Insertion(vetSort);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("\nTempo com insertion sort: %lf\n",cpu_time_used);

    //SELECTION SORT
    arrayCopy(SIZE,vet,vetSort); //fazendo uma copia do vetor gerado
    start = clock();
    selection(vetSort);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("\nTempo com selection sort: %lf\n",cpu_time_used);

    //BUBBLE SORT
    arrayCopy(SIZE,vet,vetSort); //fazendo uma copia do vetor gerado
    start = clock();
    bubble(vetSort);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("\nTempo com bubble sort: %lf\n",cpu_time_used);
}

void quickSort(Element * vetSort, int start, int end)
{
    int i, j;
    Element pivot, temp;
    i = start;
    j = end-1;
    pivot = vetSort[(start + end)/2];
    while (i <= j)
    {
        while (vetSort[i].id < pivot.id && i < end)
        {
            i++;
        }
        while (vetSort[j].id > pivot.id && j > start)  
        {
            j--;
        }
        if (i <= j)
        {
            temp = vetSort[i];
            vetSort[i] = vetSort[j];
            vetSort[j] = temp;
            i++;
            j--;
        }
    }
    if (j > start)
    {
        quickSort(vetSort,start,j+1);
    }
    if (i < end)
    {
        quickSort(vetSort,i,end);  
    }          
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

