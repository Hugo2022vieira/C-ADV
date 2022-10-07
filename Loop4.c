#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int cont,x,r;
    for(cont=1;cont<=5;cont++)
    {
    printf("\nDigite um valor para a variavel x:");
    scanf("%d",&x);
    r=x*3;
    printf("\nO valor da variavel R e:%d\n",r);
}
printf("\nFim do Looping...\n",r);
system("PAUSE");
return;
}
