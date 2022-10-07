#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int num,cont;
    printf("\Informe um valor para o incremento:");
    scanf("%d",&num);
    if(num<20)
    for(cont=num;cont<=20;cont+=2)
    if(cont==num)
    printf("%d\n",cont);
    else
    printf("-%d\n",cont);
    else
    printf("\nInforme apenas valores menores ou igual a 20\n");
    system("PAUSE");
    return 0;
}
