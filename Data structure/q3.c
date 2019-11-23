#include<stdlib.h>
#include<stdio.h>
#include<string.h>

typedef struct tDado
{
    char nome[20];
    float valor;
}Dado;

typedef struct tLista
{
    int id;
    Dado dado;
    struct tLista * listaProx;
}Lista;

Lista inicializarLista();
void adicionarInicio(Lista * lista, Dado dado);
void adicionarFim(Lista * lista, Dado dado);
void remover(Lista * lista, int id);
void exibir(Lista lista);
Lista * buscarAnterior(Lista * lista, int id);
Lista * ultimoElemento(Lista * lista);
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
    Lista lista = inicializarLista();

    adicionarInicio(&lista,dado[0]);
    adicionarInicio(&lista,dado[1]);
    adicionarFim(&lista,dado[2]);
    adicionarInicio(&lista,dado[3]);
    remover(&lista,1);
    exibir(lista);

    return 0;
}

Lista inicializarLista()
{
    Lista lista;
    lista.id = 1;
    lista.listaProx = NULL;
    return lista;
}
void adicionarInicio(Lista * lista, Dado dado)
{
    Lista * novoElemento = (Lista*)calloc(1,sizeof(Lista));
    novoElemento->id = lista->id;
    strcpy(novoElemento->dado.nome, dado.nome);
    novoElemento->dado.valor = dado.valor;
    novoElemento->listaProx = lista->listaProx;
    lista->id++;
    lista->listaProx = novoElemento;
}
void adicionarFim(Lista * lista, Dado dado)
{
    Lista * novoElemento = (Lista*)calloc(1,sizeof(Lista));
    novoElemento->id = lista->id;
    strcpy(novoElemento->dado.nome, dado.nome);
    novoElemento->dado.valor = dado.valor;
    novoElemento->listaProx = NULL;

    Lista * ultimoElem = ultimoElemento(lista);
    ultimoElem->listaProx = novoElemento;
    lista->id++;
}
void remover(Lista * lista, int id)
{
    Lista * elemantoAnterior = buscarAnterior(lista, id);
    Lista * elemento = elemantoAnterior->listaProx;
    elemantoAnterior->listaProx = elemento->listaProx;
    elemento->listaProx=NULL;
    free(elemento);
}

Lista * buscarAnterior(Lista * lista, int id)
{
    Lista * listaRef = lista;
    while (listaRef->listaProx->id != id && listaRef != NULL)
    {
        listaRef = listaRef->listaProx;
    } 
    if (listaRef->listaProx->id != id)
    {
        printf("Lista vazia");
    }
    return listaRef;
}
Lista * ultimoElemento(Lista * lista)
{
    Lista * listaRef = lista->listaProx;
    if (listaRef->listaProx == NULL)
    {
        printf("\nLista vazia");
    }
    
    while (listaRef->listaProx != NULL)
    {
        listaRef = listaRef->listaProx;
    }
    return listaRef;
}
void exibir(Lista lista)
{
    Lista * listaRef = lista.listaProx;
    if (listaRef == NULL)
    {
        printf("\nLista vazia");
    }
    
    while (listaRef != NULL)
    {
        printf("\n");
		printf("Elemento: %d \n", listaRef);
        printf("ID: %d\n", listaRef->id);
        printf("Nome: %s\n", listaRef->dado.nome);
        printf("Proximo: %d\n", listaRef->listaProx);
        printf("\n");
        listaRef = listaRef->listaProx;
    }
    
}