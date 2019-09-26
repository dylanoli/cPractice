#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[100];
    int old;
    float height;
    //recebe os valores
    printf("Digite o seu completo:\n");
    fgets(name,99, stdin);
    fflush(stdin);
    printf("Digite a sua idade:\n");
    scanf("%d",&old);
    printf("Digite a sua altura:\n");
    scanf("%f",&height);
    //exibe os valores
    printf("Nome = %s", name);
    printf("A primeira letra do seu nome = %c\n", name[0]);
    printf("A sua idade = %d\n", old);
    printf("A sua altura = %.2f\n", height);
    return 0;
}