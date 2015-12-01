#include <stdio.h>
#include <stdlib.h>


char nombre[50];

int main()
{
	printf("Dame tu nombre\n"); 
	gets(nombre);
	printf("\n\n                             %s\n\n\n", nombre);
	
	
	system("pause");
} 

