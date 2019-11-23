#include <stdio.h>
#include <stdlib.h>
int main()
{
    float numX, numY;
    printf("Digite um numero x:\n");
    scanf("%f", &numX);
    printf("Digite um numero Y:\n");
    scanf("%f", &numY);
    if(numY==0)
    {
        printf("nao e possivel fazer divisao por zero.\n");
    }
    else
    {
        printf("A divisao de X por Y e igual a %.2f",(numX/numY));
    }
    return 0;
}