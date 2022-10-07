#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int x,y;
    for(x=65,y=78;x<=77;x++,y++)
    printf("%c:=%d - %c:=%d\n",x,x,y,y);
    system("PAUSE");
    return 0;
}
