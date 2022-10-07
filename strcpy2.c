#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
char palavra[20];
printf("\nDigite a palavra:");
gets(palavra);

strcpy(palavra,palavra);
printf("\n\nA Palavra digitada e: %s\n",palavra);
system("PAUSE");
return 0;
}
