#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int senha,login;
    printf("Login:");
    scanf("%d",&login);
    printf("senha");
    scanf("%d",&senha);
    
       if(login==000 && senha==123)
       printf("\nBem-vindo ao Sistema\n");
       else
       printf("\nErro ao tentar se logar...\n");
       
system("PAUSE");
return 0;
}
