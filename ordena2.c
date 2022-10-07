#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LINHA 5
#define COLUNA 30
int main(void)
{
char nomes[LINHA][COLUNA],aux[COLUNA];
int i,j;
/*lê os nomes*/
for(i=0;i<LINHA;i++)
{
printf("\nDigite o mome %d:",i+1);
gets(nomes[i]);
}
/*Ordenação crescente de nomes*/
for(i=0;i<LINHA-1;i++)
for(j=i+1;j<LINHA;j++)
if(strcmp(nomes[i],nomes[j])>0)
{
strcpy(aux,nomes[i]);
strcpy(nomes[i],nomes[j]);
strcpy(nomes[j],aux);
}
/*Exibe nomes na ordem crescente*/
printf("|nNomes na ordem crescente\n");
for(i=0;i<LINHA;i++)
printf("%d nome: %s\n",i+1,nomes[i]);
/*Ordenação decrescente*/
for(i=0;i<LINHA-1;i++)
for(j=i+1;j<LINHA;j++)
if(strcmp(nomes[i],nomes[j])<0)
{
strcpy(aux,nomes[i]);
strcpy(nomes[i],nomes[j]);
strcpy(nomes[j],aux);
}
/*Exibe nomes na ordem decrescente*/
printf("\nNomes na ordem decrescente\n");
for(i=0;i<LINHA;i++)
printf("%d nome: %s\n",i+1,nomes[i]);
system("PAUSE");
return 0;
}
