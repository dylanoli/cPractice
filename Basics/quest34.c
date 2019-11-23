#include <stdio.h>
#include <stdlib.h>

typedef struct{
        char name[20];
        int old;
        char gender[10];
        float weight;
        float height;
        float imc;
} Person;
int main()
{
    const int quant;

    int i;
    printf("Digite a quantidade de Pessoas: ");
    scanf("%d", &quant);
    
    Person* person = malloc(sizeof(Person)*quant);
    for (i = 0; i < quant; i++)
    {
        printf("\nDigite o nome da pessoa %d: ",i);
        fflush(stdin);
        gets(person[i].name);
        printf("Digite a idade da pessoa %d: ",i);
        scanf("%d", &person[i].old);
        printf("Digite a sexo da pessoa %d: ",i);
        fflush(stdin);
        gets(person[i].gender);
        printf("Digite o peso da pessoa %d: ",i);
        scanf("%f", &person[i].weight);
        printf("Digite a altura da pessoa %d: ",i);
        scanf("%f", &person[i].height);
        person[i].imc = person[i].weight/(person[i].height*person[i].height);
    }

    for (i = 0; i < quant; i++)
    {
        printf("\nPessoa %d:\n",i);
        printf("Nome: %s\n", person[i].name);
        printf("Idade: %d\n", person[i].old);
        printf("Sexo: %s\n", person[i].gender);
        printf("Peso: %.2f\n", person[i].weight);
        printf("Altura: %.2f\n", person[i].height);
        printf("IMC: %f\n", person[i].imc);
    }   
    return 0;
}