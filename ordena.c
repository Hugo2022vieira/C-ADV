#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int main(void)
{
int valores[MAX],i,j,aux;
/*l� os valores*/
for(i=0;i<MAX;i++)
{
printf("\nDigite o %d valor:",i+1);
scanf("%d",&valores[i]);
}
/*Ordena��o crescente*/
for(i=0;i<MAX-1;i++)
for(j=i+1;j<MAX;j++)
if(valores[i]>valores[j])
{
aux=valores[i];
valores[i]=valores[j];
valores[j]=aux;
}
/*Exibe valores na ordem crescente*/
printf("\nValores na ordem crescente\n");
for(i=0;i<MAX;i++)
printf("%d� valor: %d\n",i+1,valores[i]);
/*ordena��o decrescente*/
for(i=0;i<MAX-1;i++)
for(j=i+1;j<MAX;j++)
if(valores[i]<valores[j])
{
aux=valores[i];
valores[i]=valores[j];
valores[j]=aux;
}
/*Exibe valores na ordem decrescente*/
printf("\nValores na ordem decrescente\n");
for(i=0;i<MAX;i++)
printf("%do valor:%d\n",i+1,valores[i]);
system("PAUSE");
return 0;
}
