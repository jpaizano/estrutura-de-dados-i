#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int mes;
    char *nomemes[] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

    if (argc == 4)
    {
        mes = atoi(argv[2]);
        if (mes < 1 || mes > 12)
            printf("Erro!\nMes invalido!\n");
        else
            printf("\n%s de %s de 20%s \n", argv[1], nomemes[mes - 1], argv[3]);
    }
    else
        printf("Erro! O programa precisa dos argumentos para execução\nPasse na linha de comando: dia mes ano, todos inteiros\nExemplo: ./programa 01 10 20\n");
}