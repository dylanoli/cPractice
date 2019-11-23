#include <stdio.h>
#include <stdlib.h>
int main()
{
    float accountBalance[] = {100,100};
    float valueTransference;
    printf("Digite quanto voce deseja transferir para a conta 2? ");
    scanf("%f",&valueTransference);
    if(valueTransference<=accountBalance[0])
    {
        accountBalance[0]-=valueTransference;
        accountBalance[1]+=valueTransference;
        printf("Saldo Atual: %.2f", accountBalance[0]);
    }
    else
    {
        printf("Saldo Insuficiente!");
    }
    return 0;
}