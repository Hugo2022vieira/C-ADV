#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    void mensagem (void);/*protótipo da função*/
    mensagem(); /*chamada ao procedimento*/
    system("PAUSE");
    return 0;
}
void mensagem (void)
{
     printf("Esta mensagem esta dentro de um procedimento...\n");
     }
