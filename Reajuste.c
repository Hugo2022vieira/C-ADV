#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    float salario,novo_salario;
    printf("Digite o seu salario: R$");
    scanf("%f',&salario");
      if(salario<500)
      novo_salario=salario*1.15;
      else
      if(salario<=1000)
      novo_salario=salario*1.10;
      
      else
      novo_salario=salario*1.05;
printf("\nO novo salario do funcionario e igual a R$ %.2f\n",novo_salario);
system("PAUSE");
return 0;
}
