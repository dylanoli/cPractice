#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define SIZE 3
typedef struct tDado
{
    char nome[20];
    float valor;
}Dado;

typedef struct tPilha
{
    Dado dado[SIZE];
    int top;
}Pilha;

Pilha iniciaPilha();
void addPilha(Pilha * pilha,Dado dado);
void removerPilha(Pilha * pilha);
void exibir(Pilha pilha);

int main()
{
    Dado dado[4];
    
    strcpy(dado[0].nome,"Dylan");
    dado[0].valor=19;

    strcpy(dado[1].nome,"Valdir");
    dado[1].valor=12;

    strcpy(dado[2].nome,"Joao");
    dado[2].valor=130;

    strcpy(dado[3].nome,"Marcos");
    dado[3].valor=30;

    Pilha pilha = iniciaPilha();
    addPilha(&pilha, dado[0]);
    addPilha(&pilha, dado[1]);
    addPilha(&pilha, dado[2]);
    removerPilha(&pilha);
    addPilha(&pilha, dado[3]);
    exibir(pilha);
    return 0;
}

Pilha iniciaPilha()
{
    Pilha pilha;
    pilha.top = -1;
    return pilha;
}

void addPilha(Pilha * pilha,Dado dado)
{
    if (pilha->top<SIZE-1)
    {
        pilha->top++;
        strcpy(pilha->dado[pilha->top].nome,dado.nome);
        pilha->dado[pilha->top].valor = dado.valor;
    }
    else
    {
        printf("\nPilha cheia!");
    } 
}
void removerPilha(Pilha * pilha)
{
    if (pilha->top>-1)
    {
        pilha->top--;
    }
    else
    {
        printf("Pilha está vazia");
    } 
}

void exibir(Pilha pilha)
{
    int i;
    if (pilha.top>-1)
    {
        for (i = 0; i <= pilha.top; i++)
        {
            printf("\nDado %d:", i);
            printf("\nnome %s", pilha.dado[i].nome);
            printf("\nvalor %lf\n", pilha.dado[i].valor);
        }
    }
    else
    {
        printf("Pilha está vazia");
    } 
    
}