#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int mensagem(void);
int main(void)
{
mensagem();
system("pause");
}
int mensagem(void)
{
    char resp;
    printf("Deseja continuar [s/n]?:");
    fflush(stdin);
    scanf("%c",&resp);
    resp=toupper(resp);
    if (resp=='S')
    mensagem();
    else
    return 0;
}
