#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 5
int main(void)
{
int d,entra=0;
char*nome;
char*lista[MAX]={"Ana","Marcus","Tatiana","Marcelo","Maria"};
puts("seu nome:");
gets(nome);
for(d=0;d<MAX;d++)
if(strcmp(lista[d],nome)==0)
entra=1;
if(entra==1)
puts("USUARIO LOGADO");
else
puts("ERRO! USUARIO NAO ENCONTRADO!!!");
system("PAUSE");
return 0;
}
