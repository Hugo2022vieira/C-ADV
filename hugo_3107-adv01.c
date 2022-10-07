#include<stdio.h>
#include<stdlib.h>

int main(void)
{
int a,b,x;
printf("Digite dois numeros:");
scanf("%d%d",&a,&b);
//x=a<b;
if(a>b)
{
    printf("O 1 e maior que o 2");
/*printf("o maior deles e: %d\n",a);
printf("o menor numero e: %d\n",b);*/
}else if(a == b){
        printf("Iguais");
    }else{
        printf("O 2 e maior que o 1");
}
system("PAUSE");
return 0;
}
