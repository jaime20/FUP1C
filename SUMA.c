#include<stdio.h>
#include<stdlib.h>
int i;
int valor;
int suma;
int main()



{
	
	
	i=1;
		printf("    ingrese  el valor    \n ");
	 	scanf("%d",&valor);
		
	while(i<=valor){
		
	suma=suma+i;

	printf("%d\n",i);	
		

	i=i+1;	
		
		
	}
	printf(" El resultado  de la suma es %d\n ",suma);
	
		system("pause");
}
