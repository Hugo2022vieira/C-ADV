#include<stdio.h>
#include<stdlib.h>
int main(void)
{
float media (float nota1, float nota2); /*Protótipo da função*/
float resultado;
resultado=media(10,9); /*Os argumentos 10 e 9 foram passados diretamente*/
printf("A media e igual a %.2f.\n",resultado);
system("PAUSE");
return 0;
}
float media (float nota1, float nota2)
{
return(nota1+nota2)/2;
}
