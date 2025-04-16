#include <stdio.h>

int main(){

  int rainha = 1; // variavel Rainha
  int torre = 1;  // Variavel torre



//movimentação do bispo 5 casas
  printf("---Movimento do Bispo---\n");
  for (int i = 0; i < 5; i++)
  {
    printf("Direita\n");
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

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
