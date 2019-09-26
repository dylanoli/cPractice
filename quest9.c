#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float weight;
    float height;
    printf("Digite o seu peso: ");
    scanf("%f", &weight);
    printf("Digite sua altura: ");
    scanf("%f", &height);
    printf("Seu IMC e %.2f",weight/pow(height,2));
    return 0;
}
