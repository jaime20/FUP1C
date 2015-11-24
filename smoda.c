#include<stdio.h>
#include<stdlib.h>

int cal[10];
int i;
int posibles[11];
int mayor, posmayor;
int bandera=0;

int main()
{
	for(i=0;i<10;i++)
	{
		printf("Calificacion  %d:", (i+1));
		scanf("%d", &cal[i]);
	}
	for(i=0;i<11;i++)
	{
		posibles[i]=0;
	}
	for(i=0;i<10;i++)
	{
		posibles[cal[i]]++;
	}
	posmayor=0;
	mayor=posibles[0];
	for(i=1;i<11;i++)
	{
				if(posibles[i] == mayor)
	{
		bandera=1;
	}
		if(posibles[i]>mayor)
		{
			mayor=posibles[i];
			posmayor= i;
			bandera=0;
		}
	}
	if(bandera ==0 )
	{
		printf("La moda es %d\n", posmayor);
	}
	else
	{
		printf("No hay moda\n");
	}

	
	
	
	
	system("pause");
}
