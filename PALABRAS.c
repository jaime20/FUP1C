#include<stdio.h>
#include<stdlib.h>

char pal[50];
char letra;
char nueva; 
int i;

int main()
{
	printf("Programa que Reemplaza caracteres\n");
	printf("Ingrese la palabra\n");
	scanf("%s", pal);
	printf("Ingrese la letra que desea cambiar\n");
	scanf(" %c", &letra);
	printf("Ingrese la letra por la cual va a sustituir\n");
	scanf(" %c", &nueva);
	for(i=0;i<50;i++)
	{
		if(pal[i]==letra)
		{
			pal[i] = nueva;
		}
	}
	printf("La nueva palabra es %s\n", pal);
	system("pause");
}

