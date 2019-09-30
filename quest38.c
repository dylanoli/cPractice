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

    
    //vetor que guarda as palavras ja repetidas, logo elas nao precisam se analisadas novemente
    int* canJump = malloc(sizeof(int)*(spaces+1));

    for (i = 0; i <= spaces; i++)//defindo os valor iniciais para -1, por segurança
    {
        canJump[i] = -1;
    }
    int legthCanJump = 0;
    for (i = 0; i <= spaces; i++)//percorre todas as palavras
    {
        int repeat = 0; //quantas vezes a palavra repete
        int alreadyRepeated = 0; //quantas vezes a palavra ja foi repetida, com base nas palavra anteriores
        for (j = 0; j <= spaces; j++) //verifica o repeat
        {
            if (!strcmp(word[i],word[j]))
            {
                repeat++;
            }            
        }
        for (j = 0; j <= i; j++) //verifica o alreadyRepeated
        {
            if (!strcmp(word[i],word[j]))
            {
                alreadyRepeated++;
            }            
        }
        //se a palavra ja foi repetida anteriormente, ele guarda essa palavra no canJump
        if (alreadyRepeated>1) 
        {
            canJump[legthCanJump] = i;
            legthCanJump++;
        }

        //verifica se a palavra atual estar em canJump
        int canShow = 1;
        for (j = 0; j < legthCanJump; j++)
        {
            if (i==canJump[j])
            {
                canShow = 0;// se a palavra estiver em canJump, ela nao sera exibida
            }           
        }
        //exibe o vetor de string
        if (canShow)
        {
            printf("\nPalavra[%d]: %s, %d vezes",i, word[i], repeat); 
        }
                    
    }
    return 0;
}