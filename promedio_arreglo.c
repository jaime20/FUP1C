#include <stdio.h>

int cal[10];
int mayor;
int n;
int i;
int suma=0;
float prom;
int n2;
int main ()
{
	
	for (n=0;n<10;n++)
	{
		printf("Calificacion %d: ",(n+1));
		scanf ("%d",&cal[n]);
		suma=suma+cal[n];
	}
	prom=(float)suma/10;
	printf("El promedio es: %f \n",prom);
	mayor=0;
	for(n=0;n<10;n++)
	{
		if(cal[n]>mayor)
		{
			mayor=cal[n];
		}
	}
    

	system("pause");
	
}
