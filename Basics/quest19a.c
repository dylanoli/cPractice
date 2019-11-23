#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char password[] = "12345678";
    char tryPassword[9] = "";
    printf("\nDigite a senha correta: ");
    scanf("%s", tryPassword);
    while (strcmp(password,tryPassword))
    {
        printf("\nSenha incorreta, tente novamente: ");
        scanf("%s", tryPassword);
    }
    printf("\nSenha Correta!");
    return 0;
}