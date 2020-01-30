#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include"element.h"
Element addElement(char nome[]);
Element binarySearch(int key, Element vetElem[], int vetLength);
int idReference = 0;

int main() {
    Element elements[5];
    elements[0] = addElement("Joao");
    elements[1] = addElement("Maria");
    elements[2] = addElement("Felipe");
    elements[3] = addElement("Jose");
    elements[4] = addElement("Mateus");

    int key;
    Element result;
    printf("Digite um ID: ");
    scanf("%i",&key);
    result = binarySearch(key,elements,5);

    if (result.id > -1)
    {
        printf("Elemento encontrado: %s", result.name);
    }
    else
    {
        printf("Elemento nao encontrado");
    }
}

Element addElement(char name[])
{
    Element newElement;
    newElement.id = idReference++;
    strcpy(newElement.name, name);
    return newElement;
}

Element binarySearch(int key, Element vetElem[], int vetLength)
{
    Element result;
    result.id = -1;
    int start = 0;
    int end = vetLength-1;
    while (start <= end)
    {
        int middle = (end + start)/2;
        if (key > vetElem[middle].id)
        {
            start = middle+1;
        }
        else if(key == vetElem[middle].id)
        {
            result = vetElem[middle];
            break;
        }
        else
        {
            end = middle;
        } 
    }
    return result;
}
