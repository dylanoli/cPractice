#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct tDado
{
    char palavra[20];
    int qtd;
}Dado;

typedef struct tElemento
{
    int id;
    Dado Dado;
    struct tElemento * proximo;
}Elemento;

Elemento iniciaLista();
void addInicio(Elemento * lista, char* palavra);
void addDadoInicio(Elemento * lista, Dado dado);
int buscaRepetico(Elemento * lista, char* palavra);
void exibir(Elemento lista);
int makeMenu();
void organizaRepeticoes(char * frase);
void exibeBinario();

int main()
{
    FILE * pFile;
    int menu;
    do
    {
        menu = makeMenu();
        switch (menu)
        {
        case 1:
            pFile = fopen("frase.txt","r");
            if (pFile == NULL)
            {
                printf("Arquivo nao encontrado.");
            }
            else
            {
                char frase[100];
                fgets(frase,sizeof(frase),pFile);
                organizaRepeticoes(frase);
            }
            
            fclose(pFile);
            break;
        case 2:
            exibeBinario();
            break;
        case 0:
            printf("Programa finalizado.");
            break;
        default:
            printf("\nOpcao invalida, tente novamente.");
            break;
        }
    } while (menu != 0);
    return 0;
}
int makeMenu()
{
    int menu;
    printf("\nMENU\n");
    printf("[1] - Ler mensagem\n");
    printf("[2] - Ler arquivo binario\n");
    printf("[0] - sair\n");
    scanf("%d", &menu);
    return menu;
}
void exibeBinario()
{
    FILE * pFile;
    pFile = fopen("fraseQ7.bin","rb");
    if (pFile == NULL)
    {
        printf("Arquivo nao encontrado.");
    }
    else
    {
        Elemento lista = iniciaLista();
        Dado dado;
        while (fread(&dado,sizeof(Dado),1,pFile)>0)
        {
            addDadoInicio(&lista,dado);
        }
        fclose(pFile);
        exibir(lista);
    }
    
    
}

void organizaRepeticoes(char * frase)
{
    Elemento lista = iniciaLista();
    int fim = 0;
    int i = 0;
    int inicioPalavra = i;  
    while (fim != 1)
    {        
        if (frase[i] == '\0')
        {
            fim = 1;
        }
        
        if (frase[i] == ' ' || frase[i] == '\0')
        {
            frase[i] = '\0';
            char * palavra = &frase[inicioPalavra];
            if (buscaRepetico(&lista,  palavra) == 0)
            {
                addInicio(&lista,palavra);
            }
            
            inicioPalavra=i+1;
        }
        i++;
    }
    
    FILE * pFile;
    pFile = fopen("fraseQ7.bin","wb");
    Elemento * listaRef = lista.proximo;
    while (listaRef != NULL)
    {
        fwrite(&(listaRef->Dado),sizeof(Dado),1,pFile);
        listaRef = listaRef->proximo;
    }
    fclose(pFile);
    exibir(lista);
}

Elemento iniciaLista()
{
    Elemento novoElemento;
    novoElemento.id = 1;
    novoElemento.proximo = NULL;
    return novoElemento;
}

void addInicio(Elemento * lista, char* palavra)
{
    Elemento * novoElemento = (Elemento*)malloc(sizeof(Elemento));
    strcpy(novoElemento->Dado.palavra,palavra);
    novoElemento->id = lista->id;
    novoElemento->Dado.qtd = 1;
    novoElemento->proximo = lista->proximo;
    lista->proximo = novoElemento;
    lista->id++;
}

void addDadoInicio(Elemento * lista, Dado dado)
{
    Elemento * novoElemento = (Elemento*)malloc(sizeof(Elemento));
    novoElemento->id = lista->id;
    strcpy(novoElemento->Dado.palavra,dado.palavra);
    novoElemento->Dado.qtd = dado.qtd;
    novoElemento->proximo = lista->proximo;
    lista->proximo = novoElemento;
    lista->id++;
}
int buscaRepetico(Elemento * lista, char* palavra)
{
    Elemento * elementoRef = lista->proximo;
    int encontrou = 0;
    while (encontrou == 0 && elementoRef != NULL)
    {
        if (strcmp(palavra,elementoRef->Dado.palavra) == 0)
        {
            elementoRef->Dado.qtd++;
            encontrou = 1;
        }
        elementoRef = elementoRef->proximo;
    }
    return encontrou;
    
}


void exibir(Elemento lista)
{
    Elemento * elementoRef = lista.proximo;
    while (elementoRef != NULL)
    {
        printf("\n");
	    printf("Elemento: %d \n", elementoRef);
        printf("ID: %d\n", elementoRef->id);
        printf("Palavra: %s\n", elementoRef->Dado.palavra);
        printf("Quantidade: %d\n", elementoRef->Dado.qtd);
        printf("Proximo: %d\n", elementoRef->proximo);
        printf("\n");
        elementoRef = elementoRef->proximo;
    }
    
}