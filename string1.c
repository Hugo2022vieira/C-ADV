#include<stdio.h>
#include<stdlib.h>
int main(void)
{
char nome[30],sobrenome[35];
printf("\nDigite o seu nome:");
gets(nome);
printf("\nDigite o seu sobrenome:");
gets(sobrenome);
printf("\n\nSeja bem-vindo,%s %s!\n",nome,sobrenome);
system("PAUSE");
return 0;
}
