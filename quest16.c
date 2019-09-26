#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float a,b,c;
float delta, x1, x2;

float deltaResult();
void xResults();

int main()
{
    printf("Digite um valor para a: ");
    scanf("%f", &a);
    printf("Digite um valor para b: ");
    scanf("%f", &b);
    printf("Digite um valor para c: ");
    scanf("%f", &c);
    delta = deltaResult();
    xResults();
    printf("\nA equacao e:  %.1fx^2 + %.1fx + %.1f\n", a, b, c);
    printf("Delta = %.2f\n", delta);
    if(delta>=0)
    {
        printf("X1 =  %.2f\nX2 = %.2f", x1, x2);
    }
    else
    {
        printf("O valor das raizes nao sao reais\n");
    }
    
    return 0;
}
float deltaResult()
{
    //b^2 - 4ac
    return (pow(b,2) - 4 * a * c);
}

void xResults()
{
    //(-b +- sqrt(delta))/2a
    x1 = (b * (-1) + sqrt(delta))/(2*a);
    x2 = (b * (-1) - sqrt(delta))/(2*a);
}