#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int Resultado, valorA = 0, valorB = 0;

  if (argc == 3)
  {
    printf("\nMultiplicando valores passados na linha de comando\n");

    // atoi converte de alfanumérico para inteiro
    valorA = atoi(argv[1]);
    valorB = atoi(argv[2]);

    Resultado = valorA * valorB;
    printf("\n%d X %d = %d\n", valorA, valorB, Resultado);
  }
  else
  {
    printf("Erro! O programa precisa dos argumentos para execução\nPasse na linha de comando dois valores inteiros\nExemplo: ./programa 12 10\n");
  }
  return 0;
}