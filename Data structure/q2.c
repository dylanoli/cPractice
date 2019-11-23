#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define SIZE 3
typedef struct tDado
{
    char nome[20];
    float valor;
}Dado;

typedef struct tFila
{
    Dado dado[SIZE];
    int inicio;
    int fim;
}Fila;

Fila inicializarFila();
void adicionarFila(Fila * fila, Dado dado);
void removerFila(Fila * fila);
void exibir(Fila fila);
int proximo(int pos);
int main()
{
    Dado dado[4];
    
    strcpy(dado[0].nome,"Dylan");
    dado[0].valor=19;

    strcpy(dado[1].nome,"Mateus");
    dado[1].valor=12;

    strcpy(dado[2].nome,"Joao");
    dado[2].valor=130;

    strcpy(dado[3].nome,"Marcos");
    dado[3].valor=30;

    Fila fila = inicializarFila();
    adicionarFila(&fila, dado[0]);
    adicionarFila(&fila, dado[1]);
    adicionarFila(&fila, dado[2]);
    removerFila(&fila);
    adicionarFila(&fila, dado[3]);
    exibir(fila);
    return 0;
}

Fila inicializarFila()
{
    Fila fila;
    fila.inicio = -1;
    fila.fim = -1;
    return fila;
}
void adicionarFila(Fila * fila, Dado dado)
{
    if (proximo(fila->fim) != fila->inicio)
    {
        fila->fim = proximo(fila->fim);
        strcpy(fila->dado[fila->fim].nome, dado.nome);
        fila->dado[fila->fim].valor = dado.valor;

        if (fila->inicio == -1)
        {
            fila->inicio++;
        }
    }
    else
    {
        printf("\nFila cheia!");
    }
}
void removerFila(Fila * fila)
{
    if (fila->inicio != -1)
    {
        if (fila->inicio == fila->fim)
        {
            fila->inicio = fila->fim = -1;
        }
        else
        {
            fila->inicio = proximo(fila->inicio);
        }
        
    }
    else
    {
        printf("\nFila vazia!");
    }  
}
void exibir(Fila fila)
{
    if (fila.inicio != -1)
    {
        int i;
        for (i = fila.inicio; i != fila.fim;i = proximo(i))
        {
            printf("\nDado %d:", i);
            printf("\nnome %s", fila.dado[i].nome);
            printf("\nvalor %lf\n", fila.dado[i].valor);
        }  
        printf("\nDado %d:", i);
        printf("\nnome %s", fila.dado[i].nome);
        printf("\nvalor %lf\n", fila.dado[i].valor);     
    }
    else
    {
        printf("\nFila vazia!");
    }
}

int proximo(int pos)
{
    return (pos+1)%SIZE;
}