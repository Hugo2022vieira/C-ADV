#include<stdlib.h>
#include<stdio.h>
int main(void)
{
    char file[80];
    /*prompt para digitar o caminho do arquivo*/
    printf("Arquivo a deletar:");
    gets(file);
    /*Deleta o arquivo*/
    if(remove(file)==0)
    printf("O arquivo %s foi removido\n",file);
    else
    {
    printf("Arquivo invalido...");
    exit(0);
}
return 0;
}
