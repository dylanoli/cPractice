#include <stdio.h>      
#include <stdlib.h>     
#include <time.h> 
#include <string.h>
#include "element.h" 

void showVetor(int lines, Element* vet);
void vetorGenerate(int lines, Element* vet);

void arrayCopy(int lines, Element * src,Element * target);

void showVetor(int lines, Element* vet)
{
    int i;
    for ( i = 0; i < lines; i++)
    {
        printf("[%d]",vet[i].id); 
        // printf("\n\n[%d]",vet[i].id);        
        // printf("\n[%s]",vet[i].name);  
    }    
}
void vetorGenerate(int lines, Element* vet)
{
    int i;
    srand(time(NULL));
    for ( i = 0; i < lines; i++)
    {
        vet[i].id = rand()%(lines);
        for (int j = 0; j < 6; j++)
        {
            vet[i].name[j] = (rand()%(25))+97; 
        }
        vet[i].name[6]='\0';        
    }
}
void arrayCopy(int lines, Element * src,Element * target)
{
    int i;
    for (i = 0; i < lines; i++)
    {
        target[i].id = src[i].id;
        strcpy(target[i].name,src[i].name);
    }
}

