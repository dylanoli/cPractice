#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    char answer[10];
    if(num%2)
    {
        strcpy(answer,"impar");
    }
    else
    {
        strcpy(answer,"par");
    }
    printf("O numero e %s", answer);
    return 0;
}