#include <stdio.h>
#include <stdlib.h> 

int n1;
int enero;
int febrero;
int marzo;
int abril;
int mayo;
int junio;
int julio;
int agosto;
int septiembre;
int octubre;
int noviembre;
int diciembre;
 
int main()

 {
 	printf("Ingrese el numero  del mes: ");
 	scanf("%d", &n1);
 	switch(n1)
 	{
 		case 1:{
 			printf("Este mes es enero\n");
			break;
		 }
		 case 2:{
		 	printf("Este mes es febrero\n");
			break;
		 }
		  case 3:{
		 	printf("Este mes es marzo\n");
			break;
		 }
		  case 4:{
		 	printf("Este mes es abril\n");
			break;
		 }
		  case 5:{
		 	printf("Este mes es mayo\n");
			break;
		 }
		  case 6:{
		 	printf("Este mes es junio\n");
			break;
		 }
		  case 7:{
		 	printf("Este mes es julio\n");
			break;
		 }
		  case 8:{
		 	printf("Este mes es agosto\n");
			break;
		 }
		  case 9:{
		 	printf("Este mes es septiembre\n");
			break;
		 }
		  case 10:{
		 	printf("Este mes es octubre\n");
			break;
		 }
		  case 11:{
		 	printf("Este mes es noviembre\n");
			break;
		 }
		  case 12:{
		 	printf("Este mes es diciembre\n");
			break;
		 }
		 default:{
		 	printf("Este valor no existe\n");
			break;
		 }
		 
	 }
	 
	 system("pause");
 }
