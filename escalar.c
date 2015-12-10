#include <stdio.h>
#include <stdlib.h>
int matriz[3][3];
int i,j,Filas,Columnas,n1,resul;
int main()
{
	for(i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
		printf("Matriz [%d][%d]\n",i+1,j+1);
		scanf("%d", &matriz[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ", matriz[i][j]);
		}printf("\n");
	}
	printf("Dame el escalar\n");
	scanf("%d",&n1);
		for(i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
		resul=matriz[i][j]*n1;
		printf("%d ", resul);
		}printf("\n");
	}
	system("PAUSE");
	return 0;
}