/*lendo um caracter po vez*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    FILE*ptr;
    int ch;
    ptr=fopen("c:/dados.txt","r");
    while((ch=getc(ptr))!=EOF)
    printf("%c",ch);
    fclose(ptr);
    system("PAUSE");
    return 0;
}
