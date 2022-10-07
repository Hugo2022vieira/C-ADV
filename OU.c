#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int cpf,rg;
printf("CPF:");
scanf("%d",&cpf);
printf("RG:");
scanf("%d",&rg);

                if(cpf==0000||rg==1111)
                   printf("\nUsuario Logado no Sistema\n");
                else
                   printf("\nErro ao tentar se logar...\n");
                   
system("PAUSE");
return 0;
}   
