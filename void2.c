#include<stdio.h>
#include<stdlib.h>
int main(void)
{
void media(float nota1, float nota2); /*Prototipo da função*/
float n1,n2;
printf("Digite duas notas:");
scanf("%f%f",&n1,&n2);
media (n1,n2); /*O procedimento recebe dois argumentos dso usuário*/
system("PAUSE");
return 0;
}
void media(float nota1,float nota2)
{
printf("A media e igual a %.2f\n",(nota1+nota2)/2);
}
