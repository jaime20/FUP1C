#include <stdio.h>
#include <stdlib.h>

int n1;
int n2;

int main ()
{
	printf("Ingrese los kilos de ropa:  ");
	scanf("%d", &n1);
	if(n1>=0 && n1<=10)
	{
		printf("Cantidad minima de agua\n");
	}
	else
	{
		if(n1>=11 && n1<=15)
		{
			printf("Cantidad media de agua\n");
		}
		else
		{
			if(n1>=16 && n1<=20)
			{
				printf("Cantidad maxima de agua\n");
			}
			else
			{
				if(n1>20)
				{
					printf("No se puede lavar\n");
				}
			}
		}
	}
	if(n1<=20)
	{
		printf("Ingrese el tipo de ropa:\nDelicada:1\nNormal:2\nSucia:3\n");
		scanf("%d", &n2);
		if(n2==1)
		{
			printf("Tiempo de lavado 5 minutos\n");
		}
		else
		{
			if(n2==2)
			{
				printf("Tiempo de lavado 10 minutos\n");
			}
			else
			{
				if(n2==3)
				{
					printf("Tiempo de lavado 10 minutos\n");
				}
				else
				{
					if(n2!=1,2,3)
					{
						printf("Valor desconocido, intente con los valores 1, 2 o 3\n ");
					}
				}
			}
		}
	}
	
	system("pause");
}
