#include<stdio.h>
#include<stdlib.h>
int main(void)
{
FILE*ptr;
char frase[80];
if((ptr=fopen("c:/dados.txt","r"))==NULL)
{
printf("%Erro ao tentar abrir o arquivo");
exit(0);
}
while(fgets(frase,sizeof(frase),ptr)!=NULL)
printf("%s\n",frase);
fclose(ptr);
system ("PAUSE");
return 0;
}
