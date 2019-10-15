#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char word [20];
    int lengthWord;
    int i,j;
    printf("Digite uma palavra: ");
    fflush(stdin);
    gets(word);
    lengthWord = strlen(word);
    
    //vetor que guarda as palavras ja repetidas, logo elas nao precisam se analisadas novemente
    int* canJump = malloc(sizeof(int)*(lengthWord));

    for (i = 0; i < lengthWord; i++)//defindo os valor iniciais para -1, por segurança
    {
        canJump[i] = -1;
    }
    int legthCanJump = 0;
    for (i = 0; i < lengthWord; i++)//percorre a plavra
    {
        int repeat = 0; //quantas vezes a letra repete
        int alreadyRepeated = 0; //quantas vezes a letra ja foi repetida, com base nas letras anteriores
        for (j = 0; j < lengthWord; j++) //verifica o repeat
        {
            if (word[i]==word[j])
            {
                repeat++;
            }            
        }
        for (j = 0; j <= i; j++) //verifica o alreadyRepeated
        {
            if (word[i]==word[j])
            {
                alreadyRepeated++;
            }            
        }
        //se a letra ja foi repetida anteriormente, ele guarda essa letra no canJump
        if (alreadyRepeated>1) 
        {
            canJump[legthCanJump] = i;
            legthCanJump++;
        }
        //verifica se a letra atual estar em canJump
        int canShow = 1;
        for (j = 0; j < legthCanJump; j++)
        {
            if (i==canJump[j])
            {
                canShow = 0;// se a letra estiver em canJump, ela nao sera exibida
            }           
        }
        //exibe o vetor de string
        if (canShow)
        {
            printf("\n%c, %d vezes",word[i], repeat); 
        }        
    }
    return 0;
}