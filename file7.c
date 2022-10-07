/*Gravando estruturas*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

struct
{
int cod;
char nome[30];
float preco;
}produto;
int main(void)
{
    char temp[50],resp;
    FILE*ptr;
    if((ptr=fopen("c:/dados.txt","w"))==NULL)
    {
    printf("%Erro ao tentar abrir o arquivo");
    exit(0);
}
do
{
    fflush(stdin);
    printf("Digite o codigo do produto:");
    gets(temp);
    produto.cod=atoi(temp);
    printf("Digite o nome do produto:");
    gets(produto.nome);
    printf("Digite o valor do produto:");
    gets(temp);
    produto.preco=atof(temp);
    fwrite(&produto,sizeof(produto),1,ptr);
    printf("Deseja continuar cadastrando produtos:");
    resp=getc(stdin);
    resp=toupper(resp); /*Converte para maiusculo*/
}while(resp=='S');
fclose(ptr);
system("PAUSE");
return 0;
}
