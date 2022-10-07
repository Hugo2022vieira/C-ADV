#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
char sexo;
int idade_feminino=0,masculino=0,feminino=0,total_pessoas=0,total=0,total_feminino=0,idade=0,
media_idade=0,media_idade_fem=0;
do
{
	 	  
printf("\nDigite a idade: ");
scanf("%d",&idade);
if (idade!=0)
{
fflush(stdin);
printf("\nDigite o sexo (masculino[m] ou feminino[f]): ");
scanf("%c",&sexo);
if(sexo=='m')
{
masculino++;
total_pessoas++;
}
else
{
feminino++;
total_pessoas++;
total_feminino+=idade;        
if((idade>18)&&(idade<50))
{
idade_feminino++;
}
}                
total+=idade;
}
	                      
}
while(idade!=0);
printf("\nTotal de pessoas entrevistadas: %d pessoas",total_pessoas);
media_idade=total/total_pessoas;
printf("\nMedia de idade dos usuarios : %d anos",media_idade);
media_idade_fem=total_feminino/feminino;
printf("\nMedia de idade das mulheres: %d anos",media_idade_fem);
printf("\nQuantidade de pessoas do sexo masculino: %d homem(s)",masculino);
printf("\nPessoas do sexo feminino entre 18 e 50 anos: %d mulhere(s)\n",idade_feminino);
system("PAUSE");
return 0;
}
