#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char resp='s';
    int x,r;
    do
    {
    system("CLS");/*limpa a tela*/
    printf("\nDigite um valor para a variavelx:");
    scanf("%d",&x);
    r=x*3;
    printf("\nO valor da variavel R e: %d\n",r);
    printf("\nDeseja continuar [s/n?]:",r);
    fflush(stdin);/*limpa o buffer do teclado*/
    scanf("%c",&resp);
     }
while(resp=='s'||resp=='S');
printf("\nFim do programa...\n",r);
system("PAUSE");
return 0;
}
