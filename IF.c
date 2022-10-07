#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int a,b,x;
printf("Digite dois valores:");
scanf("%d%d",&a,&b);
x=a+b;
      if(x>10)
      printf("O valor da soma entre %d e %d e igual %d\n",a,b,x);
system("PAUSE");
return 0;
}
