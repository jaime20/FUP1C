#include<stdio.h>
#include<stdlib.h>

int i;
int n;
int suma;
int main()
{
	printf("Programa que sume los numeros pares hasta un delimitado numero\n");
	scanf("%d", &n);
		for(i=0;i<=n;i=i+2)
		{
			suma=i+suma;
		}
		printf("%d\n", suma);
		
	printf("\n");
	system("pause");
}
