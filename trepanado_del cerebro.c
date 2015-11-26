#include <stdio.h>
#include <stdlib.h>

int cal[10];
int n;
int menor;
int veces;
int i;
int aux;
int main ()
{
	printf("Programa que nos da los numeros mas pequeños\n");

	for (n=0;n<10;n++)
	{
		printf("Digito %d: ",(n+1));
		scanf ("%d",&cal[n]);
	}
	printf("Cuantos numeros quieres?");
	scanf("%d", &veces);
	aux = 0;
	for(i=0;i<veces;i++)
	{
		menor=60000;
		for(n=0;n<10;n++)
		{
			if(cal[n]<menor && cal[n]>aux )
			{
				menor=cal[n]; 
			}
		}
		if(menor!=60000 )
		{
			printf("El numero menor es:  %d\n", menor);
			aux = menor;
		}
	
		
	}
	if(veces>10)
			{
				printf("Solo Existen 10 numeros,  estas trepanado del cerebro no existen %d\n", veces);
			}
   
   
   
   system("pause");
}
