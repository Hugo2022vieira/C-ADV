#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
char palavra[40];
int tamanho;
printf("\nDigite uma palavra:");
gets(palavra);
tamanho=strlen(palavra);/*armazena o tamanho da string*/
printf("\nA palavra %s tem %d caracter(es):\n\n",palavra,tamanho);
system("PAUSE");
return 0;
}
