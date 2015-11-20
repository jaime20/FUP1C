
#include<stdio.h>
#include<stdlib.h>
int i;
int b;
int main()
{
    printf("Programa que muestra el rango entre 2 numeros\n");
	printf("Escribe el primer valor del rango \n");
	scanf("%d" ,&i);
	printf("Escribe el segundo valor de el rango\n");
	scanf("%d" ,&b);
	if(i<=b)
{
	while(i<=b)
{
	printf("%d\n",i);
	i=i+1;
}
}
	else if (b<=i)
{
	while(b<=i)
{
	printf("%d\n",i);
	i=i-1;
}
}system ("PAUSE");
	return 0;
}
