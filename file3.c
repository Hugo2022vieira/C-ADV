/*Gravando uma string por vez*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
    FILE*ptr;
    char frase[80];
    if((ptr=fopen ("c:/dados.txt","w"))==NULL)
    {
    printf("%Erro ao tentar abrir o arquivo");
    exit(0);
}
    printf("Digite uma string:");
    while(strlen (gets(frase))>0)
    {
    fputs(frase,ptr);
    fputs("\n",ptr);
}
fclose(ptr);
system("PAUSE");
return 0;
}
