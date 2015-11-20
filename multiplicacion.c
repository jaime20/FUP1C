#include<stdio.h>
#include<stdlib.h>
int i;
int valor1;
int valor2;
int suma;

int main()



{
	
	
	i=1;
		printf("ingrese  el valor 1   \n ");
	 	scanf("%d",&valor1);
		printf("ingrese  el valor 2   \n ");
	 	scanf("%d",&valor2);
	 	
	while(i<=valor2){
	
		
	suma=suma+valor1;
	
		

	i=i+1;	
		
		
	}
	printf("El resultado es %d ",suma);
	
		system("pause");
}
