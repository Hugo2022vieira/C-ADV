#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    float teste, prova, media;
    printf("nota do teste:");
    scanf("%f", &teste);
    printf("nota da prova ");
    scanf("%f",&prova);
    media=(teste+prova)/2;
    printf("a media do aluno e igual a: %.2f\n", media);
    system("PAUSE");
    return 0;
}
