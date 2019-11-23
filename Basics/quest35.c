#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE * pfile;
    pfile = fopen("quest35.csv","r");
    char Char;
    char phrase[200];
    if (pfile == NULL)
    {
        printf("Nao existe arquivo para ser lido.\n");
    }
    else
    {
        printf("Palavras:\n");
        while ((Char = fgetc(pfile))!=EOF)
        {
            if(Char!=';')
            {
                printf("%C", Char);
            }
            else
            {
                printf("\n");
            }
            
        }
    }
    fclose(pfile);
    printf("\nEscreva novos valores para o arquivo, no formato: value;value;value...\n");
    scanf("%s",&phrase);
    pfile = fopen("quest35.csv","w");
    fprintf(pfile,"%s",phrase);
    fclose(pfile);
    return 0;
}