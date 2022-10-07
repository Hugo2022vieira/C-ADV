#include<stdio.h>
#include<stlib.h>
int main(void)
{
int a,b,x;
printf("digite um valor para A:");
scanf("%d",&a);
printf("digite um valor para B:");
scanf("%d",&b);
x=a+b;
      if(x>=10)
      {
        x+=5;/*x=x+5*/
        printf("O resultado do calculo e igual a %d\n",x+5);
      }
      else
      {
         x-=7;/*x=x-7*/
         printf("O resultado do calculo e igual a %d\n",x-7);
         }
system("PAUSE");
return 0;
}          
      
