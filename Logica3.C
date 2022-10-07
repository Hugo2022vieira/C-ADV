#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int a,b;
printf("digite um valor para a:");
scanf("%d",&a);
printf("digite um valor para b:");
scanf("%d",&b);
printf("\nSoma:%d+%d=%d",a,b,a+b);
printf("\nSubtracao:%d-%d=%d",a,b,a-b);
printf("\nMultiplicacao:%d*%d=%d",a,b,a*b);
printf("\nDivisao:%d/%d=%d",a,b,a/b);
system("PAUSE");
return 0;
}
