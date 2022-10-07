#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
int a[5];
int i,pesq;
for(i=0;i<5;i++)
{
printf("Digite o valor de A:");
scanf("%d",&a[i]);
}
printf("Digite o valor da pesquisa:");
scanf("%d",&pesq);
for (i=0;i<5;i++)
if(a[i]==pesq)
printf("o Valor do vetor A e:[%d]\n",i);
else
printf("valor inexistente\n");
system("PAUSE");
return 0;
}
