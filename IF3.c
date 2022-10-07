#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int a,b,x;
printf("digite uma valor para A:");
scanf("%d",&a);

printf("digite um valor para B:");
scanf("%d",&b);
x=a+b;
       if(x>=10)
          printf("O resultado do calculo e igual a %d\n",x+5);
       else
          printf("o resultado do calculo e igual a %d\n",x-7);
system("PAUSE");
return 0;
} 
