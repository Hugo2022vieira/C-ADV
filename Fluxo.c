#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int x,r,cont=1;
    
    while(cont<=5)
    {
      system("CLS");/*LIMPA A TELA*/
      printf("\nDigite um valor para a variavel x:");
      scanf("%d",&x);
      r=x*3;
      printf("\nO valor da variavel R e: %d\n",r);
      cont++;/*INCREMENTO DA VARIAVEL CONT*/
      }
      system("PAUSE");
      return 0;
      }
