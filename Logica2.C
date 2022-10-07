#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int a,b,x;
system("CLS");
printf("valor da variavel A:");
scanf("%d",&a);
printf("valor da variavel B:");
scanf("%d",&b);
x=a;/*a variavel x salva o valor da variavel a*/
a=b;/*a variavel a ira receber o valor de b*/
b=x;/*recebe o valor de x , que nada mais é do que o valorde a salvo*/

printf("o valor da variavel A e: %d\n",a);
printf("o valor da variavel B e: %d\n",b);
system("PAUSE");
return 0;/*retorna se o programa teve êxito ou falha*/
}
