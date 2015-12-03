#include<stdio.h>
#include<stdlib.h>

char pal[50];
char sub[50];
char nueva[50];
int i;
int n;
int a;
int j;
int m;

int main()
{
	printf("Programa que nos dice si es o no una subcadena\n");
	printf("Dame la primera palabra\n");
	scanf("%s", pal);
	printf("Dame la segunda palabra\n");
	scanf("%s", sub);
	n=0;
	j=1;
	m=1;
	for(i=0;i<50;i++)
	{
		if(pal[i]==sub[n])
		{
			nueva[a]=sub[n];
			a++;
			n++;
		}
	}
	if(sub[n]==nueva[a] && sub[n-1]==nueva[a-1]) 
	{
		printf("Si es una subcadena\n");	
	}
	else
	{
		printf("No es una subcadena\n");
	}	

	system("pause");
}
