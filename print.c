#include<stdio.h>
#include<stdlib.h>

int main (int argc, char*argv)
{
    FILE*ptr;
    system("CLS");
    if(argc<1)
    {
    printf("\nUso:<printf seu_nome>\n");
}
ptr=fopen("c:/dados.txt","w");
fprintf(ptr,"%s", argv[1]);
system ("PAUSE");
return 0;
}
