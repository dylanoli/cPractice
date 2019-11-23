#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "array.h"
#define size_line 10
int main()
{
    char vetor[size_line];
    int i;
    printf("Digite uma frase: ");
    gets(vetor);
    printf("\nfrase: %s", vetor);
    printf("\nfrase invertida:");
    int lenghPhrase = strlen(vetor);
    for (i = lenghPhrase; i >= 0; i--)
    {
        printf("%c",vetor[i]);
    }
}