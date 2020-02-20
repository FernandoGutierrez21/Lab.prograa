/*PRACTICA #2
FERNANDOYAHIR GUTIERREZ SANTOYO 
1917844
06-02-2020*/

#include"stdio.h"
#include"stdlib.h"
#include"math.h"
int main()
{
int a=2, b=3;

printf("%d + %d = %d\n",a,b,a+b);
printf("%d - %d = %d\n",a,b,a-b);
printf("%d * %d = %d\n",a,b,a*b);
printf("%d / %d = %d\n",a,b,a/b);

float q=2, w=3;
printf("%f + %f = %.2f\n",q,w,q+w);
printf("%f - %f = %.2f\n",q,w,q-w);
printf("%f * %f = %.2f\n",q,w,q*w);
printf("%f / %f = %.2f\n",q,w,q/w);

double t=43;
printf("%f\n",t);


system("pause");
return 0;
}
