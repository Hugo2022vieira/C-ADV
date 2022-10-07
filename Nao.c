#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int a,b;
printf("A");
scanf("%d",&a);
printf("B");
scanf("%d",&b);

      if(!(b>a))
      b+=3;
      else
      b*=2;
      
printf("\nO valor de B apos o teste condicional e de %d\n",b);
system("PAUSE");
return 0;
}
