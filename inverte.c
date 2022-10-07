#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
    char msg[30];
    int i;
    printf("\nDigite uma mensagem:");
    gets(msg);
    for (i=strlen(msg);i>=0;i--)
    printf("%c.\n",msg[i]);
    system("PAUSE");
    return 0;
}
