#include <stdio.h>
#include <stdlib.h>
int main()
{
    char word [20];
    int count=0;
    printf("Digite uma palavra: ");
    scanf("%s", &word);

    while (word[count])
    {
        count++;
    }
    printf("A palavra tem %d letras", count);    
    return 0;
}