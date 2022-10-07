/*Lendo estruturas*/
#include<stdio.h>
#include<stdlib.h>

struct
{
      int cod;
      char nome[30];
      float preco;
      }produto;
      int main(void)
      {
          FILE*ptr;
          if((ptr=fopen("c:/dados.txt","r"))==NULL)
          {
          printf("%Erro ao tentar abrir o arquivo");
          exit(0);
          }
          while(fread(&produto,sizeof(produto),1,ptr)==1)
          {
          printf("Codigo do produto: %d\n",produto.cod);
          printf("Nome do produto: %s\n",produto.nome);
          printf("Preco do produto: %.2f\n",produto.preco);
          }
          fclose(ptr);
          system("PAUSE");
          return 0;
          }
          
