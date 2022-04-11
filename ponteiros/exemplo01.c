#include <stdio.h>
#include <stdlib.h>

// Assinatura da função de troca
void troca (int *p, int *q);

int main(void)
{
  // Declaração das variáveis a e b
  int a, b;
  // Declaração das variáveis de tipo ponteiro para inteiro
  int *p, *q;
  // Atribuição dos valores para as variáveis a e b
  a = 10;
  b = 15;
  // Atribuição do endereço de a e b para os ponteiros p e q
  p = &a; 
  q = &b;
  // Imprime o valor existente em a e b
  printf("a = %d e b = %d \n", a, b);
  // Chamada da função da troca dos valores de a e b
  troca(p,q);
  // Imprime o valor existente em a e b
  printf("a = %d e b = %d \n", a, b);

  return 0;
}

// Função de troca de valores
void troca (int *p, int *q)
{
   int temp;
   temp = *p; 
   *p = *q; 
   *q = temp;
}