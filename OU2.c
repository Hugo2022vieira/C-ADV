#include<stdio.h>
#include<stdlib.h>
int main(void)
{
char sexo;
printf("digite o sexo:");
scanf("%c",&sexo);
switch(sexo)
{
            case 'M':
                 case'm':printf("o seu sexo e masculino\n");
                 break;
                 
                 case'F':
                 case 'f':printf("o seu sexo e feminino\n");
                 break;
                 
                 default:printf("sexo invalido\n");
                 }
system("PAUSE");
return 0;
}
