#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include"element.h"

#define SIZE 20

typedef struct tList
{
    Element element;
    struct tList * next;
}List;

void addElement(Element elements[], char name[]);
List * startList();
Element tableSearch(char key[], Element elements[]);
int position(char key[],int try);
void show(Element elements[]);
int idReference = 1;
int main() {
    Element elements[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        elements[i].id = -1;
    }
    
    addElement(elements,"Joao");
    addElement(elements,"Maria");
    addElement(elements,"Felipe");
    addElement(elements,"Jose");
    addElement(elements,"Mateus");
    show(elements);

    char key[50];
    Element result;
    printf("Digite um nome: ");
    scanf("%s",key);
    result = tableSearch(key,elements);

    if (result.id > -1)
    {
        printf("Elemento encontrado: %i", result.id);
    }
    else
    {
        printf("Elemento nao encontrado");
    }
}

List * startList()
{
    List * list = (List*)calloc(1,sizeof(List));
    list->element.id = 1;
    list->next = NULL;
    return list;
}

void addElement(Element elements[], char name[])
{
    Element element;
    element.id = idReference++;
    strcpy(element.name, name);
    int try = 0;
    int find = 0;
    
    while (find == 0 && try<SIZE)
    {
        int posi = position(name,try);
        if (elements[posi].id == -1)
        {
            elements[posi] = element;
            find = 1;
        }
        else
        {
            try++;
        }
    }
    if(try>=SIZE)
    {
        printf("\nVetor cheio, nao eh possivel adicionar o elemento!!\n");
    }  
}

Element tableSearch(char key[], Element elements[])
{
    Element result;
    result.id = -1;
    int try = 0;
    int find = 0;
    while (find == 0 && try<SIZE)
    {
        int posi = position(key,try);
        if (strcmp(elements[posi].name,key) == 0)
        {
            result = elements[posi];
            find = 1;
        }
        else
        {
            try++;
        }
    }
    return result;
}

int position(char key[],int try)
{
    return (strlen(key) + try)%SIZE;
}

void show(Element elements[])
{
    for (int i = 0; i < SIZE; i++)
    {
        if (elements[i].id == 0)
        {
            printf("\nLista vazia");
        }
        else
        {
            printf("\n");
            printf("ID: %d\n", elements[i].id);
            printf("Nome: %s\n", elements[i].name);
            printf("\n");
        }
    }  
}