#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define SIZE 2
typedef struct tPilha
{
    float operando[SIZE];
    int top;
}Pilha;

Pilha iniciaPilha();
void addPilha(Pilha * pilha, float operando);
void removerPilha(Pilha * pilha);
void exibir(Pilha pilha);
void calcular(Pilha * Pilha, char * exprecao);
void operando(Pilha * pilha, char operador);
int main()
{
    char exprecao[20];
    printf("Digite uma exprecao: \n");
    fgets(exprecao, sizeof(char)*20,stdin);

    Pilha pilha = iniciaPilha();
    calcular(&pilha,exprecao);
    exibir(pilha);
    return 0;
}

Pilha iniciaPilha()
{
    Pilha pilha;
    pilha.top = -1;
    return pilha;
}

void calcular(Pilha * pilha, char * exprecao)
{
    int inicio = 0;
    int i = 0;
    int fim = 0;
    while (fim == 0) 
    {
        if (exprecao[i] == '\0' ||  exprecao[i] == '\n')
        {
            fim =1;
        }
        
        if (exprecao[i] == '\0' || exprecao[i] == ' ' ||  exprecao[i] == '\n')
        {
            exprecao[i] = '\0';
            char * result = &exprecao[inicio];
            float valor;
            switch (result[0])
            {
            case '+':
            case '-':
            case '/':
            case '*':
                operando(pilha,*result);
                break;
            default:
                sscanf(result,"%f",&valor);
                addPilha(pilha,valor);
                break;
            }
            inicio = i+1;
        }
        i++;
    }
    
}
void operando(Pilha * pilha, char operador)
{
    float resultado;
    switch (operador)
    {
    case '+':
        resultado =  pilha->operando[pilha->top-1] + pilha->operando[pilha->top];
        break;
    case '-':
        resultado =  pilha->operando[pilha->top-1] - pilha->operando[pilha->top];
        break;
    case '*':
        resultado =  pilha->operando[pilha->top-1] * pilha->operando[pilha->top];
        break;
    case '/':
        resultado =  pilha->operando[pilha->top-1] / pilha->operando[pilha->top];
        break;
    default:
        break;
    }
    removerPilha(pilha);
    removerPilha(pilha);
    addPilha(pilha,resultado);
}
void addPilha(Pilha * pilha, float operando)
{
    if (pilha->top<SIZE-1)
    {
        pilha->top++;
        pilha->operando[pilha->top] = operando;
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
            printf("\nResultado: %f\n", pilha.operando[i]);
        }
    }
    else
    {
        printf("Pilha está vazia");
    } 
    
}