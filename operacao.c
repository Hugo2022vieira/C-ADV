#include<stdio.h>
#include<conio.h>
#define MAX 5
int main(void)
{
    char b[MAX];
    int a[MAX],c[MAX],d[MAX];
    int i,j,linha=3;
    
    for(i=0;i<5;i++)
    {
      fflush(stdin);
      printf("\nDigite o %d valor para o vetor A:",i+1);
      scanf("%d",&a[i]);
      fflush(stdin);
      printf("\nDigite a %d operacao para o vetor B:",i+1);
      scanf("%c",b[i]);
      fflush(stdin);
      printf("\nDigite o %d valor para o vetor C:",i+1);
      scanf("%d",&c[i]);
      switch (b[i])
      
      {
             case '+': d[i]=a[i]+c[i];
             break; 
             case '-': d[i]=a[i]-c[i];
             break;
             case '*': d[i]=a[i]*c[i];
             break;
             case '/': if(a[i]==0)
             d[i]=0;
             else
             d[i]=a[i]/c[i];
             break;
             default:puts("OPERACAO INVALIDA!");
             break;
             }
             }
             printf("\nPressione qualquer tecla para continuar...");
             getch();
             clrscr();
             gotoxy(15,1);printf("Vetor A");
             gotoxy(30,1);printf("Vetor B");
             gotoxy(45,1);printf("Vetor C");
             gotoxy(60,1);printf("Vetor D");
             
             for (i=0;i<5;i++)
             {
                 gotoxy(17,linha);printf("%d",a[i]);
                 gotoxy(32,linha);printf("%c",b[i]);
                 gotoxy(47,linha);printf("%d",c[i]);
                 gotoxy(55,linha);printf("=");
                 gotoxy(62,linha);printf("%d",d[i]);
                 linha+=2;
                 printf("\n");
                 for(j=1;j<80;j++) printf("-");
                 }
                 gotoxy(30,15); printf("Fim do programa...");
                 getch();
                 return 0;
}
