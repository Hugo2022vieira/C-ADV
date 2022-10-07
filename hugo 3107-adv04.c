#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void menu(void)
{
system("cls");
printf("1.quadrado\n");
printf("2.retangulo\n");
printf("3.circulo\n");
printf("4.trapezio\n");
printf("5.sair do programa\n");
}
float quadrado(float lado)
{
return lado * lado;
}
float retangulo(float base, float altura)
{
return base * altura;
}
float circulo(float raio)
{
return 3,14*(raio*raio);
}
float trapezio (float base_maior,float base_menor,float altura)
{
return((base_maior+base_menor)*altura)/2; 
}
void areaquadrado (void)
{
float quadrado(float lado);
float a,b;
system ("cls");
printf ("digite o valor do primeiro lado:\n");
scanf("%f",&a);
printf("digite o valor do segundo lado:\n");
scanf("%f",&b);
printf("\n%.2f*%.2f=%.2f\n\n",a,b);
system("PAUSE");
}
void arearetangulo(void)
{
float retangulo(float base,float altura);
float a,b;
system ("cls");
printf ("digite o valor da base :\n");
scanf("%f",&a);
printf("digite o valor da altura :\n");
scanf("%f",&b);
printf("\n%.2f*%.2f=%.2f\n\n",a,b,retangulo(a,b));
system("PAUSE");
}
void areacirculo(void)
{
float circulo(float raio);
float a,b;
system ("cls");
printf ("digite o valor do raio:\n");
scanf("%f",&a);
printf("digite o valor 2 do raio:\n");
scanf("%f",&b);
printf("\n3.14*(%.2f*%.2f)=%.2f\n\n",a,b);
system("PAUSE");
}
void areatrapezio(void)
{
float trapezio(float base_maior,float base_menor,float altura);
float a,b,c;
system ("cls");
printf ("digite o valor da base maior:\n");
scanf("%f",&a);
printf("digite o valor da base menor:\n");
scanf("%f",&b);
printf("digite o valor da altura:\n");
scanf("%f",&c);
printf("\n((%.2f+%.2f)*%2.f)/2\n\n",a,b,c,trapezio(a,b,c));
system("PAUSE");
}
void menu(void);
/*
void area_quadrado;
void arearetangulo;
void areacirculo;
void areatrapezio;
*/
int main(void)
{
int opcao=0;
while (opcao==0)
{
    scanf("%d",&opcao);
    if (opcao <= 1 && opcao >= 4)
            opcao = 1;
}
switch(opcao)
{
case 1:quadrado()
break;
case 2:retangulo(base,altura)
break;
case 3:circulo(raio)
break;
case 4:trapezio(base_maior,base_menor,altura)
break;
}
}
return 0;
}
