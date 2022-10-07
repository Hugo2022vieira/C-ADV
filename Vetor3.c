#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int main(void)
{
int a[MAX],b[MAX],i=0,auxiliar;
    printf("\nRotina para a limentacao do vetor A\n");
    while(i<10)
    {
      printf("\nDigite o valor da %da posicao do vetor A:",i+1);
      scanf("%d",&a[i]);
      if(i%2==0)
      b[1]=a[1]*5;
      else
      b[1]=a[1]*5;
      i++;
      }
      i=0;
      printf("\n");
      do
      {
      printf("A[%d]=%d-B[%d] = %d\n",i,a[i],i,b[i]);
      i++;
      }
      while(i<10);
      system("PAUSE");
      return 0;
      }
