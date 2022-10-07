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
    /*
    STRCAT _ Concatena a palavra2 a palavra1.
    */
    strcat(palavra1,palavra2);
    printf("\n Apalavra concatena e %s\n\n",palavra1);
    system("PAUSE");
    return 0;
}
