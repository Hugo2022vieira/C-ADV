#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int*pointer,dado=8;
pointer=&dado;
printf("valor de pointer: %d", pointer);
dado=9;
printf("\nValor de pointer: %d",*pointer);
printf("\nValor de dado: %d",dado);
printf("\nEndereco de memoria: %X\n",&pointer);
system("PAUSE");
return 0;
}
