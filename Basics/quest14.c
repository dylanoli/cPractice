#include <stdio.h>
#include <stdlib.h>
int main()
{
    float test[3];
    float average;
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("Digite a sua nota %d: ",i+1);
        scanf("%f",&test[i]);
    }
    average = (test[0] + test[1] + test[2])/3;
    printf("Sua media e: %.2f\n", average);
    if (average>=7)
    {
        printf("Voce foi aprovado!");
    }
    else if (average>=3.5f)
    {
        float test4Enough = (50 - average*6)/4;
        printf("Voce foi para a recuperacao!\n");
        printf("Voce precisa de %.2f na avaliacao final!", test4Enough);
    }
    else
    {
        printf("Voce foi reprovado!");
    }
    return 0;
}