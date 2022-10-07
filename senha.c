#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(void)
{
char senha[3];
int i=0;
printf("\nDigite uma senha:");
while(i<10)
{
senha[i]=getch();
printf("*");
i++;
}
getch();
senha[i]='\0';
printf("\n\nA senha digitada foi: %s\n",senha);
system("PAUSE");
return 0;
}
