/*Primeiramente vamos criar o menu de opções:*/
#include<stdio.h>
#include<stdlib.h>
void menu(void)
{
system("cls");
printf("1.Somar\n");
printf("2.Subtrair\n");
printf("3.Multiplicar\n");
printf("4.Dividir\n");
printf("5.Sair\n");
printf("\n\topcao:");
}
/*Agora vamos criar as opções aritméticas:*/
float somar (float valor1,float valor2)
{
return valor1+valor2;
}
float subtrair(float valor1,float valor2)
{
return valor1-valor2;
}
float multiplicar(float valor1,float valor2)
{
return valor1*valor2;
}
float dividir(float valor1,float valor2)
{
return valor1/valor2;
}
/*Agora vamos unir as opções as operações aritméticas*/
void opcao1(void)
{
float somar (float valor1,float valor2); /*Protótipo da Função*/
float a,b;
system("cls");
printf("Digite o primeiro valor:");
scanf("%f",&a);
printf("Digite o segundo valor:");
scanf("%f",&b);
printf("\n%.2f+%.2f=%.2f\n\n",a,b,somar(a,b));
system("PAUSE");
}
void opcao2(void)
{
float subtrair(float valor1,float valor2); /*Protótipo da função*/
float a,b;
system("cls");
printf("Digite o primeiro valor:");
scanf("%f",&a);
printf("Digite o segundo valor:");
scanf("%f",&b);
printf("\n%.2f-%.2f=%.2f\n\n",a,b,subtrair(a,b));
system("PAUSE");
}
void opcao3(void)
{
float multiplicar(float valor1,float valor2); /*Protótipo da função*/
float a,b;
system ("cls");
printf("digite o primeiro valor:");
scanf("%f",&a);
printf("digite o segundo valor:");
scanf("%f",&b);
printf("\n%.2f*%.2f=%2.f\n\n",a,b,multiplicar(a,b));
system("PAUSE");
}
void opcao4(void)
{
float dividir(float valor1, float valor2); /*Protótipo da função*/
float a,b;
system("cls");
printf("Digite o primeiro valor:");
scanf("%f",&a);
printf("Digite o segundo valor:");
scanf("%f",&b);
printf("\n%.2f/%.2f=%.2f\n\n",a,b,dividir(a,b));
system("PAUSE");
}
/*Por ultimo iremos criar a função principal(funcao main)*/
void menu(void);
void opcao1(void);
void opcao2(void);
void opcao3(void);
void opcao4(void);
int main(void)
{
char opcao;
while(opcao !='5')
{
menu();
opcao=getc(stdin); /* funcionamento de getcjhar*/
switch(opcao)
{
case '1':opcao1();
break;
case'2':opcao2();
break;
case'3':opcao3();
break;
case'4':opcao4();
break;
}
}
return 0;
}


 
