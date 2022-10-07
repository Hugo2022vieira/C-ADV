#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TRUE 1
int main(void)
{
    FILE*ptr;
    char produto[30];
    int cod;
    if((ptr=fopen("c:/dados.txt","w"))==NULL)
    {
    printf("%Erro ao tentar abrir o arquivo");
    exit(0);
}
while(TRUE)
{
printf("Digite o codigo do produto e o seu nome:");
scanf("%d%s",&cod,produto);
if(strlen(produto)==1)
break;
fprintf(ptr,"%d-%s",cod,produto);
}
fclose(ptr);
system("PAUSE");
return 0;
}
