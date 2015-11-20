#include<stdio.h>
#include<stdlib.h>

int n1;
int n2;
int si1;
int ganancia;
int clave1;
int clave2;
int clave3;
int clave4;
int clave5;
int total;

int main()
{
	printf("Si desea comprar escriba 1\n Si desea checar ganancia presione 2\n");
	scanf("%d", &n1);
	if(n1==1)
	{
		printf("A continuación se muestra la lista de productos, sus precios y sus claves correspondientes\n");
		printf("Cafe:$25 Clave:1\n");
		printf("Pan:$5 Clave:2\n");
		printf("Donas:$8 Clave:3\n");
		printf("Cigarros:$4 Clave:4\n");
		printf("Rebanada de pastel:$20 Clave:5\n");
		printf("Indique la clave del producto\n");
		scanf("%d", &n2);
		switch(n2)
		{
			case 1:{
				printf("Indique la cantidad del producto ");
				scanf("%d", &clave1);
				total=clave1*25;
				printf("El total es: %d\n", total);	
				printf("¿Desea ver las ganancias junto con el total?\n Si presione 1\n No presione 2\n");
				scanf("%d", &si1);
				if(si1==1)
				{
					ganancia=500+total;
					printf("La ganancia junto con el total es: %d\n", ganancia);
				}
				else
				{
					printf("Gracias por su compra\n");
				}
				
				break;
			}
			case 2:{
				printf("Indique la cantidad del producto ");
				scanf("%d", &clave2);
				total=clave2*5;
				printf("El total es: %d\n", total);
				printf("¿Desea ver las ganancias junto con el total?\n Si presione 1\n No presione 2\n");
				scanf("%d", &si1);
				if(si1==1)
				{
					ganancia=500+total;
					printf("La ganancia junto con el total es: %d\n", ganancia);
				}
				else
				{
					printf("Gracias por su compra\n");
				}
				break;
			}
			case 3:{
				printf("Indique la cantidad del producto ");
				scanf("%d", &clave3);
				total=clave3*8;
				printf("El total es: %d\n", total);
				printf("¿Desea ver las ganancias junto con el total?\n Si presione 1\n No presione 2\n");
				scanf("%d", &si1);
				if(si1==1)
				{
					ganancia=500+total;
					printf("La ganancia junto con el total es: %d\n", ganancia);
				}
				else
				{
					printf("Gracias por su compra\n");
				}
				break;
			}
			case 4:{
				printf("Indique la cantidad del producto ");
				scanf("%d", &clave4);
				total=clave4*4;
				printf("El total es: %d\n", total);
				printf("¿Desea ver las ganancias junto con el total?\n Si presione 1\n No presione 2\n");
				scanf("%d", &si1);
				if(si1==1)
				{
					ganancia=500+total;
					printf("La ganancia junto con el total es: %d\n", ganancia);
				}
				else
				{
					printf("Gracias por su compra\n");
				}
				break;
			}
			case 5:{
				printf("Indique la cantidad del producto ");
				scanf("%d", &clave5);
				total=clave5*20;
				printf("El total es: %d\n", total);
				printf("¿Desea ver las ganancias junto con el total?\n Si presione 1\n No presione 2\n");
				scanf("%d", &si1);
				if(si1==1)
				{
					ganancia=500+total;
					printf("La ganancia junto con el total es: %d\n", ganancia);
				}
				else
				{
					printf("Gracias por su compra\n");
				}
				break;
			}
		}
	}
	else
	{
		if(n1==2)
		{
			printf("Ganancias:$500\n");		
		}
		else
		{
			printf("Valor no existente\n");
		}
	}
	system("pause");
}
