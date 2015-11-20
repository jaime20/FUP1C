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
	printf ("Escriba la cantidad en MB:\n\n");
	scanf("%d", &num);
	bi = num * 8388608;
	b2 = num * 1048576;
    k = num * 1024;
    m = num;
	g = num * 0.0009765626;
	t = num * 0.00000095367;
	printf ("Bits:  %f\n,",bi);
    printf ("Bytes: %f\n",b2);
    printf ("Kilobytes: %f\n",k);
    printf ("Megabytes: %d\n",m);
	printf ("Gigabytes: %f\n",g);
	printf ("Terabytes: es %f\n", t);
	system("PAUSE");
	return 0;
}
