#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char phrase [100];
    int lengthPhrase;
    int spaces = 0;
    int i,j;
    printf("Digite uma frase: ");
    fflush(stdin);
    gets(phrase);
    lengthPhrase = strlen(phrase);
    //descobre a quantidade de espaços
    for (i = 0; i < lengthPhrase; i++)
    {
        if (phrase[i] == ' ')
        {
            spaces++;
        }        
    }
    //cria um vetor de string
    char** word = malloc(sizeof(char*)*(spaces+1));
    j = 0;

    //guada as palavras dentro do vetor
    for (i = 0; i <= spaces; i++)
    {
        word[i] = &phrase[j];
        while (phrase[j] != ' ' && phrase[j])
        {
            j++;
        }
        phrase[j] = '\0';
        j++;
    }
    //exibe o vetor de string
    for (i = 0; i <= spaces; i++)
    {
        printf("\nPalavra[%d]: %s",i, word[i]);
    }
    return 0;
}