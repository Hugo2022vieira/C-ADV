#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
char palavra[30],letra;
int i=0,flag,cont=0;
printf("\nDigite uma palavra:");
gets(palavra);
flag=strlen(palavra)/2;
while(i<flag&&cont<flag)
{
letra=palavra[strlen(palavra)-i-1];
if(palavra[i]==letra||palavra[i]+32==letra||palavra[i]-32==letra)
cont++;
i++;
}
if(cont==flag)
printf("Existe palindrade na string %s.\n\n",palavra);
else
printf("Nao existe palindrade na string %s.\n\n",palavra);
system("PAUSE");
return 0;
}
