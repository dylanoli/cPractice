#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE * file;
    file = fopen("num.txt","r");
    int x,y,z;
    fscanf(file, "%d %d %d", &x, &y, &z);
    printf("%d %d %d",x,y,z);
    fclose(file);
    return 0;
}