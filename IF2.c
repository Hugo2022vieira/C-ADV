#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int a,b,x;
printf("digite dois valores:");
scanf("%d%d",&a,&b);
     if(a>b)
       {
        x=a;
        
        a=b;
        b=x;
        }
printf("Os valores informados pelo usuario sao: %d e %d\n",a,b);
system("PAUSE");
return 0;
}
