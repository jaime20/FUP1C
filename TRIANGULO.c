#include <stdio.h>
#include <stdlib.h>

int n1;
int n2;
int n3;

int main()
{
	printf("Ingrese los  3 lados de el triangulo\n");
	printf("Ingrese el lado 1: ");
	scanf("%d", &n1);
	printf("Ingrese el lado 2: ");
	scanf("%d", &n2);
	printf("Ingrese el lado 3: ");
	scanf("%d", &n3);
	
	if(n1==n2 && n1==n3 && n2==n3)
	{
		printf("Este es un triangulo EQUILATERO\n");
	}
	else
	{
		if(n1!=n2 && n2==n3 || n2!=n1 && n1==n3 || n3!=n2 && n2==n1)
		{
			printf("Este triangulo es ISOSCELES\n");
		}
		else
		if(n1!=n2 && n2!=n3 && n3!=n1)
		{
			printf("Este es un triangulo ESCALENO\n");
		}
	}
	
	system("pause");
}
