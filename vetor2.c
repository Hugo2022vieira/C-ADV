#include<stdio.h>
#include<stdlib.h>
int main(void)
{
float nota[8],soma=0,media=0;
int i;

for(i=0;i<8;i++)
{
printf("\nDigite a %d nota:",i+1);
scanf("%f",&nota[i]) ;
soma+=nota[i];
}
media=soma/8;
printf("\nA media da turma e igual a %.2f\n",media);
system("PAUSE");
return 0;
}
