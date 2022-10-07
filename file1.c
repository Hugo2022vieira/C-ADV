/*Gravando um caracter por vez*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define ENTER 13
int main(void)
{
    FILE*ptr;
    char tecla;
    ptr=fopen("C:/dados.txt","w");
    while (tecla!=ENTER)
    {
tecla=getch();
printf("%c",tecla);
putc(tecla,ptr);
}
fclose(ptr);
printf("\n\nVerifique o arquivo c:/dados.txt\n\n");
system("PAUSE");
return 0;
}
