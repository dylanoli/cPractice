#include<stdio.h>
#include<stdlib.h>
int main()
{
    float numX, numY, numZ;
    printf("Digite um numero para X:\n");
    scanf("%f", &numX);
    printf("Digite um numero para Y:\n");
    scanf("%f", &numY);
    printf("Digite um numero para Z:\n");
    scanf("%f", &numZ);

    printf("Media: %.2f\n",((numX + numY + numZ)/3));
    return 0;
}