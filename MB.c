#include <stdio.h>
#include <stdlib.h>
int num;
float bi;
float b2;
float k;
float m;
float g;
float t; 
int main ()
{
	printf ("Escribe el numero en MB:\n\n");
	scanf("%d", &num);
	bi = num * 8388608;
	b2 = num * 1048576;
    k = num * 1024;
    m = num;
	g = num * 0.0009765626;
	t = num * 0.00000095367;
	printf ("El resultado a bits  %f\n,",bi);
    printf ("El resltado a bytes es %f\n",b2);
    printf ("El resultado a kilobytes es %f\n",k);
    printf ("El resultado a megabytes es %d\n",m);
	printf ("El resultado a gigabytes es %f\n",g);
	printf ("El resultado a terabytes es %f\n", t);
	system("PAUSE");
	return 0;
}
