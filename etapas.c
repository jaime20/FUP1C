#include <stdio.h>
#include <stdlib.h>

int n1;


int main()

{
	printf("Ingrese su edad\n");
	scanf("%d", &n1);
	if(n1>=0 && n1<=2)
	{
		printf("Eres un bebe\n");
	}
	else
	{
		if(n1>=3 && n1<=12)
		{
			printf("eres un nino\n");
		}
		else
		{
			if(n1>=13 && n1<=18)
			{
				printf("eres un adolescente\n");
			}
			else
			{
				if(n1>=19 && n1<=29)
				{
					printf("Eres un Joven\n");
				}
				else
				{
					if(n1>=30 && n1<=59)
					{
						printf("Eres un adulto\n");
					}
					else
					{
						if(n1>60)
						{
							printf("Eres un adulto mayor\n");
						}
					}
				}
			}
		}
	}
	
	system("pause");
	
}
