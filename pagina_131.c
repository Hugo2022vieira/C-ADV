#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int len(char*s); /*Prot�tipo da fun��o*/
printf("%d\n\n",len("ADV INFORMATICA"));
system("PAUSE");
return 0;
}
int len(char*s)
{
char*ap=s;
while(*ap!='\0')
ap++;
return (ap-s);
}
