#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char resp='s';
    int x,r;
    
    while(resp=='s'||resp=='S')
    {
    system("CLS");/*limpa a tela*/
    printf("\nDigite um valor qualquer:");
    scanf("%d",&x);
    r=x*3;
    printf("\nO valor da variavel R e: %d\n",r);
    printf("\nDeseja continuar[s/n?]:\n",r);
    fflush(stdin);/*Descarrega a memoria auxiliar do teclado*/
    scanf("%c",&resp);
}
printf("\nFim de programa...\n",r);
system("PAUSE");
return 0;
}
