#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a,b;
    puts("\nTestando um novo estilo de for\n");
    for(a=1;a<=51;a++) printf("-");
    printf("\n\n");/*Insere duas linhas<ENTER>*/
     for(a=0,b=0;a+b<=100;a++,b++)
     if(a==0&&b==0)/*Se for a primeira vez exiba sem o tra�o na frente*/
    printf("%d",a+b);
     else
    printf(" - %d",a+b);/* Exiba um tra�o na frente dos valores*/
    printf("\nFim do Programa..\n");
    system("PAUSE");
    return 0;
}
    
