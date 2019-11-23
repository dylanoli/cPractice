#include <stdio.h>
#include <stdlib.h>
int main()
{
    const float sodaPrice = 1.5f;
    const float pizzaPrice = 3.0f;
    const float waiterRate = 0.1f;
    int sodaQuant;
    int pizzaQuant;
    int peopleQuant;

    printf("Digite a qantidade de refrigerantes: ");
    scanf("%d", &sodaQuant);
    printf("Digite a qantidade de fatias de pizzas: ");
    scanf("%d", &pizzaQuant);
    printf("Digite a qantidade de pessoas: ");
    scanf("%d", &peopleQuant);

    float partialPrice = sodaPrice*sodaQuant + pizzaPrice*pizzaQuant;
    float totalPrice = partialPrice + (partialPrice*waiterRate*peopleQuant);
    printf("Valor parcial: %.2f\n", partialPrice);
    printf("Valor Total: %.2f", totalPrice);
    return 0;
}