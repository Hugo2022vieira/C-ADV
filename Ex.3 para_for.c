#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int num,fat=1,cont=1;
printf("\nDigite um valor para o calculo do fatorial:");
scanf("%d",&num);
for(cont=1;cont<=num;cont++)
fat*=cont;
printf("\nO fatorial de %d e igual a %d\n",num,fat);
system("PAUSE");
return 0;
}
