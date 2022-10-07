#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int a,b;
printf("digite um horario entre 01 a 24 horas:");
scanf("%d",&a);
b=a>12;
if(a<=12)
{
printf("A hora ja esta convertida: sao %d horas\n",a);
}
else
{
b=a-12;
printf("Sao %d horas no sistema de 12hs\n",b);
}
system("PAUSE");
return 0;
}
