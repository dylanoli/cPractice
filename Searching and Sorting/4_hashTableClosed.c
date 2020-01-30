#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include"element.h"

#define SIZE 5

typedef struct tList
{
    Element element;
    struct tList * next;
}List;

void addElement(List * list[], char name[]);
List * startList();
Element tableSearch(char key[], List * list[]);
void show(List * list[]);
int idReference = 1;
int main() {
    List * elements[SIZE];
    
    for (int i = 0; i < SIZE; i++)
    {
        elements[i] = startList();
    }
    
    addElement(elements,"Joao");
    addElement(elements,"Maria");
    addElement(elements,"Felipe");
    addElement(elements,"Jose");
    addElement(elements,"Mateus");
    // show(elements);
    char key[50];
    Element result;
    printf("Digite um ID: ");
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

void addElement(List * list[], char name[])
{
    List * listRef= list[strlen(name)%SIZE];
    List * newElement = (List*)calloc(1,sizeof(List));
    newElement->element.id = idReference;
    strcpy(newElement->element.name, name);
    newElement->next = listRef->next;
    idReference++;
    listRef->next = newElement;   
}

Element tableSearch(char key[], List * list[])
{
    Element result;
    result.id = -1;

    List * listRef= list[strlen(key)%SIZE];
    while (listRef != NULL)
    {
        if (strcmp(listRef->element.name,key) == 0)
        {
            result = listRef->element;
            break;
        }        
        listRef = listRef->next;
    } 
    return result;
}

void show(List * list[])
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("\nLINHA %i\n",i);
        List * ref = list[i]->next;
        if (ref == NULL)
        {
            printf("\nLista vazia");
        }
        
        while (ref != NULL)
        {
            printf("\n");
            printf("ID: %d\n", ref->element.id);
            printf("Nome: %s\n", ref->element.name);
            printf("\n");
            ref = ref->next;
        }
    }  
}