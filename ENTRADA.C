#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int numero;
    char letra;
    printf("digite uma letra: ");
    scanf("%c",&letra);
    printf("digite um numero: ");
    scanf("%d",&numero);
    printf("\n\nO numero digitado foi: %d", numero);
    printf("\nA letra digitada foi: %c\n\n",letra);
    system("PAUSE");
    return 0;
}
