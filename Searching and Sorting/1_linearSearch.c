#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include"element.h"
Element addElement(char nome[]);
int linearSearch(int key, Element vetElem[], int vetLength);
int idReference = 0;

int main() {
    Element elements[5];
    elements[0] = addElement("Joao");
    elements[1] = addElement("Maria");
    elements[2] = addElement("Felipe");
    elements[3] = addElement("Jose");
    elements[4] = addElement("Mateus");

    int key, result;
    printf("Digite um ID: ");
    scanf("%i",&key);
    result = linearSearch(key,elements,5);

    if (result > -1)
    {
        printf("Elemento encontrado: %i", result);
    }
    else
    {
        printf("Elemento nao encontrado");
    }
}

Element addElement(char nome[])
{
    Element elementoNovo;
    elementoNovo.id = idReference++;
    strcpy(elementoNovo.nome, nome);
    return elementoNovo;
}

int linearSearch(int key, Element vetElem[], int vetLength)
{
    int result = -1;
    for (int i = 0; i < vetLength-1; i++)
    {
        if (vetElem[i].id == key)
        {
            result = i;
        }
    }
    return result;
}
