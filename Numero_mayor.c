#include <stdio.h>

int cal[10];
int mayor;
int n;
int menor;


int main ()
{
	
	for (n=0;n<10;n++)
	{
		printf("Calificacion %d: ",(n+1));
		scanf ("%d",&cal[n]);
	}
	mayor=0;
	for(n=0;n<10;n++)
	{
		if(cal[n]>mayor)
		{
			mayor=cal[n];
		}
	}
	menor=0;
	for(n=0; n<10;n++)
	{
		if(cal[n]>menor && cal[n]<mayor)
		{
			menor=cal[n];
		}
	}
    printf("El numero mayor es:  %d\n", mayor);
    printf("El siguiente numero es: %d\n", menor);
	system("pause");
}
