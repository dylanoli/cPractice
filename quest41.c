#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int rangeLoop(int numStart, int numEnd);
int rangeRecursion(int numStart, int numEnd, int sum);
int main()
{
    int numStart, numEnd;
    int sumLoop = 0, sumRecursion = 0;
    printf("Digite o valor inicial: ");
    scanf("%d", &numStart);
    
    printf("Digite o valor final: ");
    scanf("%d", &numEnd);


    clock_t begin = clock();
    sumLoop = rangeLoop(numStart, numEnd);
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    
    clock_t begin1 = clock();
    sumRecursion = rangeRecursion(numStart, numEnd, sumRecursion);
    clock_t end1 = clock();
    double time_spent1 = (double)(end1 - begin1) / CLOCKS_PER_SEC;
    
    printf("\nsum for loop: %d\n",sumLoop);
    printf("time for loop: %f\n",time_spent);
    printf("\nsum for recursion: %d\n",sumRecursion);
    printf("time for recursion: %f\n",time_spent1);
   
    return 0;
}

int rangeLoop(int numStart, int numEnd)
{
    int i;
    int sum = 0;
    for (i = numStart; i <= numEnd; i++)
    {
        sum += i;
    }
    return sum;
}
int rangeRecursion(int numStart, int numEnd, int sum)
{
    int i = numStart;
    if (i <= numEnd)
    {
        sum += i;
        i++;
        return rangeRecursion(i, numEnd, sum);
    }
    else
        return sum;
}