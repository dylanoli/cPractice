#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include"arrayHandle.c"

#define SIZE 5

typedef struct tNode
{
    Element element;
    struct tNode * right;
    struct tNode * left;
}Node;

void insert(Node ** root, Element element);
Element addElement(char name[]);
void showTree(Node * node);
Node * startNode(Element element);
int idReference = 0;

int main()
{
    Node * tree;
    Element elements [SIZE];
    elements[0] = addElement("Joao");
    elements[1] = addElement("Maria");
    elements[2] = addElement("Felipe");
    elements[3] = addElement("Jose");
    elements[4] = addElement("Mateus");
    for (int i = 0; i < SIZE; i++)
    {
        insert(&tree,elements[i]);
    }
    showTree(tree);
}
Element addElement(char name[])
{
    Element newElement;
    newElement.id = idReference++;
    strcpy(newElement.name, name);
    return newElement;
}
void showTree(Node * node)
{
    if (node != NULL)
    {
        printf("\n%s",node->element.name);
        showTree(node->right);
        showTree(node->left);
    }  
}
void insert(Node ** root, Element element)
{
    Node * nodeRef;
    Node * nodeFhather;
    Node * nodeNovo = (Node*)calloc(1,sizeof(Node));
    nodeNovo->element = element;
    nodeNovo->right=NULL;
    nodeNovo->left=NULL;
    if (*root == NULL)
    {
        *root = nodeNovo;
    }
    else
    {
        nodeRef = *root;
        while (nodeRef != NULL)
        {
            nodeFhather = nodeRef;
            if(nodeRef->element.id > nodeNovo->element.id)
            {
                nodeRef = nodeRef->left;
            }
            else
            {
                nodeRef = nodeRef->right;
            } 
        }
        if(nodeFhather->element.id > nodeNovo->element.id)
        {
            nodeFhather->left = nodeNovo;
        }
        else
        {
            nodeFhather->right = nodeNovo;
        } 
        
    }
}