#include<stdio.h>
#include<stdlib.h>
int main(void)
{
float n1,n2,n3,n4,n5,n6,n7,n8,soma,media;
printf("\nDigite oito notas:"\\);
scanf("%f%f%f%f%f%f%f%",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8);
soma=n1+n2+n3+n4+n5+n6+n7+n8;
media=soma/8;
printf("\nA media da turma e igual a %.2f\n",media);
system("PAUSE");
return 0;
}
