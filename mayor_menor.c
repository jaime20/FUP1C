#include<stdio.h>
#include<stdlib.h>

int num[20];
int n;
int mayor;
int i;
int aux;
int main()
{
	printf("Programa que nos ordena 20 cifras de mayor a menor\n");
	for(n=0;n<20;n++)
	{
		printf("Digito %d: ", (n+1));
		scanf("%d", &num[n]);
	}
	aux=6000;
	for(i=0;i<20;i++)
	{
		mayor=0;
		for(n=0;n<20;n++)
		{
			if(num[n]>=mayor && num[n]<aux)
			{
				mayor=num[n]=num[n];
			}
			else
			{
				if(num[n]==mayor)
				{
					printf("fr");
				}
			}
		}
		printf("%d\n", mayor);
		aux=mayor;
	}
	
	system("pause");
}

