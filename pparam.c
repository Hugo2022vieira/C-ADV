#include<stdio.h>
#include<stdlib.h>

int main(void)
{
void troca(int*a,int*b);
int a,b;
printf("Digite o valor 1: ");
scanf("%d",&a);
printf("Digite o valor 2: ");
scanf("%d",&b);
troca(&a,&b);
printf("\n\nValores trocados(funcao main):%d %d\n\n",a,b);
system("PAUSE");
return 0;
}
void troca(int*a,int*b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
printf("\nValores trocados(passagem por referencia): %d %d\n",*a,*b);
}
