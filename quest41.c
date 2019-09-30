#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void rangeLoop(int numStart, int numEnd);
void rangeRecursion(int numStart, int numEnd);
int main()
{
    int numStart, numEnd;
    printf("Digite o valor inicial: ");
    scanf("%d", &numStart);
    
    printf("Digite o valor final: ");
    scanf("%d", &numEnd);


    clock_t begin = clock();
    rangeLoop(numStart, numEnd);
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("\ntime: %f\n\n",time_spent);

    
    clock_t begin1 = clock();
    rangeRecursion(numStart, numEnd);
    clock_t end1 = clock();
    double time_spent1 = (double)(end1 - begin1) / CLOCKS_PER_SEC;
    printf("\ntime: %f\n",time_spent1);
   
    return 0;
}

void rangeLoop(int numStart, int numEnd)
{
    int i;
    for (i = numStart; i <= numEnd; i++)
    {
        printf("[%d]",i);
    }
}
void rangeRecursion(int numStart, int numEnd)
{
    int i = numStart;
    if (i <= numEnd)
    {
        printf("[%d]",i);
        i++;
        rangeRecursion(i, numEnd);
    }
}