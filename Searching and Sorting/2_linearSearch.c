#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include"element.h"

typedef struct tList
{
    int id;
    Element element;
    struct tList * next;
}List;

void addElement(List * list, char name[]);
List * startList();
int linearSearch(int key, List * list);
void show(List * list);

int main() {
    List * elements = startList();
    addElement(elements,"Joao");
    addElement(elements,"Maria");
    addElement(elements,"Felipe");
    addElement(elements,"Jose");
    addElement(elements,"Mateus");
    show(elements);
    int key, result;
    printf("Digite um ID: ");
    scanf("%i",&key);
    result = linearSearch(key,elements);

    if (result > -1)
    {
        printf("Elemento encontrado: %i", result);
    }
    else
    {
        printf("Elemento nao encontrado");
    }
}

List * startList()
{
    List * list = (List*)calloc(1,sizeof(List));
    list->id = 1;
    list->next = NULL;
    return list;
}

void addElement(List * list, char name[])
{
    List * newElement = (List*)calloc(1,sizeof(List));
    newElement->id = list->id;
    strcpy(newElement->element.name, name);
    newElement->next = list->next;
    list->id++;
    list->next = newElement;
}

int linearSearch(int key, List * list)
{
    int result = -1;
    int i = 1;
    List * ref = list->next;
    while (ref != NULL)
    {
        if (ref->id == key)
        {
            result = i;
            break;
        }
        i++;
        ref = ref->next;
    }
    return result;
}

void show(List * list)
{
    List * ref = list->next;
    if (ref == NULL)
    {
        printf("\nLista vazia");
    }
    
    while (ref != NULL)
    {
        printf("\n");
        printf("ID: %d\n", ref->id);
        printf("Nome: %s\n", ref->element.name);
        printf("\n");
        ref = ref->next;
    }
    
}