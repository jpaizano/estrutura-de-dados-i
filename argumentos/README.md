# Argumentos em linha de comando
A linguagem C permite a passagem de argumentos via linha de comando para a excução do programa. Para tal ação, a função <b>main()</b> rebece os parâmentos formais <b>argc</b> e <b>argv</b>. A declação mais completa para a função:
```c
int main (int argc,char *argv[]);
```
## Argument Count (Argc)
O Agumento <b>argc</b> é um inteiro e possui o número de argumentos com os quais a função <b>main()</b> foi chamada na linha de comando. Por exemplo, o programa codificado no <b>exemplo01.c</b> executa a multiplicação de dois valores inteiros recebidos via argumento de linha de comando. Desta forma, o valor de <b>argc</b> será 3. Pois, a execução do programa:
 ```console
user@user-pc:~$ ./exemplo01 10 12
```
O <b>./exemplo01</b> é o argumento 1, o valor <b>10</b> é o argumento 2 e o valor <b>12</b> é o argumento 3.

### Exemplo 01
Para compilar com o GCC faça:
```console
user@user-pc:~$ gcc exemplo01.c -o nome_executavel
```
Para executar o programa:
```console
user@user-pc:~$ ./nome_executavel 10 12
```