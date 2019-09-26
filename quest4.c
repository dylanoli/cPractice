#include<stdio.h>
#include<stdlib.h>
int main()
{
    int numX, numY;
    printf("Digite um numero para X:\n");
    scanf("%d", &numX);
    printf("Digite um numero para Y:\n");
    scanf("%d", &numY);
    printf("\nX+Y = %d", (numX + numY));
    printf("\nX-Y = %d", (numX - numY));
    printf("\nX*Y = %f", (1.0f*numX * numY));
    printf("\nX/Y = %f", (1.0f*numX / numY));
    printf("\nXmodY = %d", (numX % numY));
    return 0;
}