#include<stdio.h>
#include<stdlib.h>
int main(void)
{
char nome[10][40];
int i;
puts("\nRotina para a leitura de 10 nomes");
puts("-----------------------------------");
/*leitura dos 10 nomes*/
for(i=0;i<10;i++)
{
printf("\n%d Nome:",i+1);
gets(nome[i]);
}
puts("Pressione qualquer tecla para exibicao dos 10 nomes...");
system("PAUSE");/*espera o pressionamento de uma tecla*/
system("CLS");/*limpa a tela*/
puts("\nRotina para a escrita de 10 nomes");
puts("-----------------------------------");
/*escrita dos 10 nomes*/
for (i=0;i<10;i++)
{
    if(nome[i][0]>='a'&& nome[i][0]<='z')
    nome[i][0]-=32;
    printf("\n%s",nome[i]);
}
printf("\n%d° nome : %s\n",i+1,nome[i]);
system("PAUSE");
return 0;
}
