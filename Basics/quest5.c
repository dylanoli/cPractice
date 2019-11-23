#include<stdio.h>
#include<stdlib.h>
int main()
{
    int numX, numY, numZ;
    printf("Digite um numero para X:\n");
    scanf("%d", &numX);
    printf("Digite um numero para Y:\n");
    scanf("%d", &numY);
    printf("Digite um numero para Z:\n");
    scanf("%d", &numZ);

    printf("Media: %.2f\n",((1.0f*numX + numY + numZ)/3));
    return 0;
}