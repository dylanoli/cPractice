#include <stdio.h>
#include <stdlib.h>
int main()
{
	int old;
	float hight;
	char name[100];
	
	printf("Nome Completo:\n");
	fflush(stdin);
	fgets(name,99,stdin);
	
	printf("Idade:\n");
	scanf("%d", &old);
	
	printf("Altura:\n");
	scanf("%f", &hight);
	
	printf("Nome Completo = %s",name);
	printf("Primeira letra do nome = %c",name[0]);
	printf("\nIdade = %d", old);
	printf("\nAltura = %.2f", hight);
	return 0;
}
