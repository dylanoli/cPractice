#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    const float Pi = 3.141592f;
    float radius;
    printf("Digite um raio: ");
    scanf("%f", &radius);
    printf("A area do circulo e: %.2f", Pi*pow(radius,2));
    return 0;
}