#include<stdio.h>
#include<stdlib.h>
int n1;
int n2;
int n3;
int main()
{
    printf("Programa que muestra un rango\n");
	printf("Escribe el primer numero\n");
	scanf("%d" ,&n1);
	printf("Escribe el segundo numero\n");
	scanf("%d" ,&n3);
	if (n1<n3)
	{
                    for (n2=n1; n2<=n3; n2++)
                    {
                        printf("%d..",n2);
                      
                        }
                        } 
                    for (n2=n1; n2>=n3; n2=n2-1)
                    {
                        printf("%d..",n2);
                       
                    }
                    printf("\n");
	system ("PAUSE");
}
