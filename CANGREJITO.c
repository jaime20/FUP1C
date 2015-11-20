#include<stdio.h>
#include<stdlib.h>

int profundidad;
int dia;
int noche;
int i; 
int suma;
int dias;
int main()

{
	printf("Programa en donde un cangrejito cae a un hoyo y necesitamos saber cuantos dias tardara en salir dependiendo de los metros que avanza en el dia y los metros que retrocede en la noche\n");
	printf("-De cuantos metros es el hoyo?\n");
	scanf("%d", &profundidad);
	printf("-Cuantos metros avanza en el dia?\n");
	scanf("%d", &dia);
	printf("-Cuantos metros retrocede en la noche?\n");
	scanf("%d", &noche);
	i=0;
	suma=0;
	dias=0;
	if(dia>noche || dia>profundidad)
	{
		while(i<profundidad)
		{
			suma=suma+dia;
			i=suma;
			if(dia>0)
			{
				dias=dias+1;
			}
			suma=suma-noche;
			
		}
		printf("El conejito tardo en salir %d dias\n", dias);
	}
	else
	{
		printf("El conejito nunca podra salir del hoyo\n");
	}
	system("pause");
}
