#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 20
int main(void)
{
    char s1[MAX],s2[MAX];
    int i=0,j=0,quant,cont,aux=0;
    printf("\Digite um string para s1:");
    gets(s1);
    printf("\nDigite um string para s2:");
    gets(s2);
    quant=strlen(s2);/*quant e igual ao tamanho da string s2*/
    while(s1[i]!='\0'&&cont<quant)
    {
    if(s1[i]==s2[j])
{
    i++;
    j++;
    cont++;
}
else
{
i++;
aux++;
}
}
if(cont==quant)
printf("\nA string %s foi localizada na posicao %d do vetor s1.\n",s2,aux);
else
printf("\nA string s2 nao foi localizada no interior de s1.\n...");
system("PAUSE");
return 0;
}
