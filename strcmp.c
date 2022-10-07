#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
    char palavra1[20],palavra2[20];
    printf("\nDigite a palavra 1:");
    gets(palavra1);
    printf("\nDigite a palavra 2:");
    gets(palavra2);
    
    /*strcmp palavra a ser comparada, palavra de comparação esxpressão*/
    if(strcmp(palavra1,palavra2)==0)
    printf("\nSao iguais\n\n");
    else
    printf("\nSao diferentes\n\n");
    system("PAUSE");
    return 0;
}
