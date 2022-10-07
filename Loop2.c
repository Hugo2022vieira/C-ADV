#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a,b,r,i=1;
    
    do
    {
        printf("\nDigite dois numeros:");
        scanf("%d%d",&a,&b);
        r=a+b;
        printf("\nO resultado da soma entre %d e %d e igual a %d\n",a,b,r);
        i++;
        }
        while(i<=5);
        system("PAUSE");
        return 0;
        }
