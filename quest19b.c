#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char password[] = "12345678";
    char tryPassword[9] = "";
    do
    {
        printf("\nDigite a senha correta: ");
        scanf("%s", tryPassword);
    }
    while (strcmp(password,tryPassword) && printf("\nSenha Incorreta!"));
    //o printf retorna um numero constante interpretado como verdadeiro, logo o loop depende unicamente do valor de strcmp
    printf("\nSenha Correta!");
    return 0;
}