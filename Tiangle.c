#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a,b,c;
    printf("A");
    scanf("%d",&a);
    printf("B");
    scanf("%d",&b);
    printf("C");
    scanf("%d",&c);
    
          if((a<b+c)&&(b<a+c)&&(c<a+b))
          {
printf("\nE possivel criar um triangulo\n");
if(a==b && a==c)
printf("\nTriangulo Equilatero\n");
else
if(a==b||a==c||b==c)
printf("\nTriangulo Isosceles\n");
else
printf("\nTriangulo Escaleno\n");
}
else
printf("\nNao e possivel criar um triangulo com as medidas fornecidas\n");
system("PAUSE");
return 0;
}
      
