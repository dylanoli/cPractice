#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num = 0;
	int primo = 0;
	printf("Digite um numero:\n");
	scanf("%d", &num);
	
	int i;
	for(i = 1; i < num; i++)
	{
		if(num%i == 0)
		{
			primo++;
		}
	}
	
	if(primo < 2)
	{
		printf("e primo");
	}
	else
	{
		printf("nao e primo");
	}
	return 0;
}
