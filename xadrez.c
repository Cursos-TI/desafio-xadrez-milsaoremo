#include <stdio.h>

int main(){

  int rainha = 1; // variavel Rainha
  int torre = 1;  // Variavel torre



//movimentação do bispo 5 casas
  printf("---Movimento do Bispo---\n");
  for (int i = 0; i < 5; i++)
  {
    printf("Cima/Direita\n");
  }
  //movimentação da Rainha 8 casas
  printf("\n---Movimento da Rainha---\n");
while (rainha <=8)
{
  printf("Esquerda\n", rainha);
  rainha++;
}
//movimentação da Torre 5 casas
  printf("\n---Movimento da Torre---\n");

do
{
    printf("Direita\n",torre);
    torre++;
} while (torre <= 5);




    return 0;
}