#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
char palavra1[40],palavra2[40];
printf("\nDigite a primeira palavra:");
gets(palavra1);
printf("\nDigite a segunda palavra:");
gets(palavra2);

strcat(palavra1,palavra2);
printf("\A palavra concatenada e %s \n\n",palavra1);
system("PAUSE");
return 0;
}
