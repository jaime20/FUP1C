#include <stdio.h>
#include <stdlib.h>

int cal[10];
int i;
int num;
int suma;
float promedio;
int n;
int a;
int b;

int main()
{
	i=1;
	n=0;
	while(i<=10)
	{
		printf("ingrese la calificacion %d: ", i);
		scanf("%d", &num);
		cal[n]=num;
		suma=suma+num;
		promedio=(float)suma/10;
		printf("\n");
		i++;
		n++;
		
	} 
	printf("El promedio es: %f\n", promedio);
	printf("Desea conocer alguna calificacion\n Si, presione 1\n No, presione 2\n");
	scanf("%d", &a);
	if(a==1)
	{
		printf("Ingrese la calificacion que desea conocer\n");
		scanf("%d", &b);
		n=b-1;
		printf("La calificacion %d es: %d\n", b, cal[n]);	 
	}
	
	
	
	system("pause");
}
