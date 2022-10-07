#include<stdio.h>
#include<stdlib.h>

int main(void)
{
char*scopy(char*dest,char*src); /*Protótipo da função*/
char nome[30];
scopy(nome,"ADV INFORMATICA");
printf("\n%s\n",nome);
system("PAUSE");
return 0;
}
char*scopy(char*dest,char*src)
{
char*tmp;
while((*dest++=*src++)!='\0')
tmp=dest;
return tmp;
}
