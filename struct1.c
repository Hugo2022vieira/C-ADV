#include<stdio.h>
#include<stdlib.h>
struct agenda
{
char nome[30];
char tel[12];
};
int main(void)
{
struct agenda amigo;
printf("Nome do amigo:");
gets(amigo.nome);
printf("telefone do amigo:");
gets(amigo.tel);
system ("PAUSE");
return 0;
}
