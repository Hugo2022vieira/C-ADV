#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int num,fat=1,cont=1;/*Fat e cont sao inicializados com o valor 1*/
    printf("\nDigite um valor para o calculo do fatorial:");
    scanf("%d",&num);
    while(cont<=num)
    {
    fat*=cont;/*FAT=FAT*CONT*/
    cont++;/*CONT e incrementado em mais um*/
}
printf("\nO fatorial de %d e igual a %d\n",num,fat);
system("PAUSE");
return 0;
}
