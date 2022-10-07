#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
char palavra1[20],palavra2[20];
printf("\nDigite a palavra 1:");
gets(palavra1);
printf("\Digite a palavra 2:");
gets(palavra2);
/*strcpy palavra de destino, palavra de origem*/
strcpy(palavra1,palavra2);
printf("\n\nPalavra1: %s",palavra1);
printf("\n\nPalavra2: %s\n",palavra2);
system("PAUSE");
return 0;
}
