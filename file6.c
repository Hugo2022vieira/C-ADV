/*Lendo um arquivo de forma formatada*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
    FILE*ptr;
    char produto[30];
    int cod=0;
    strcpy(produto,"");
    if((ptr=fopen("c:/dados.txt","r"))==NULL)
    {
    printf("Erro ao tentar abrir o arquivo");
    exit(0);
}
while(fscanf(ptr,"%d%s",&cod,produto)!=EOF)
printf("codigo:%d\nproduto:%s\n\n",cod,produto);
fclose(ptr);
system("PAUSE");
return 0;
}
