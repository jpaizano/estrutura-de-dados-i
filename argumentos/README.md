# Argumentos em linha de comando
A linguagem C permite a passagem de argumentos via linha de comando para a excução do programa. Para tal ação, a função <b>main()</b> rebece os parâmentos formais <b>argc</b> e <b>argv</b>. A declação mais completa para a função:
```c
int main (int argc,char *argv[]);
```
## Argument Count (Argc)
O Argumento <b>argc</b> é um inteiro e possui o número de argumentos com os quais a função <b>main()</b> foi chamada na linha de comando. Por exemplo, o programa codificado no <b>exemplo01.c</b> executa a multiplicação de dois valores inteiros recebidos via argumento de linha de comando. Desta forma, o valor de <b>argc</b> será 3. Pois, a execução do programa:
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
## Argument Values (Argv)
O Argumento <b>argv</b> é uma vetor de String. Cada String deste vetor é um dos parâmetros da linha de comando e para sabermos a quantidade de argumentos usamos o <b>argc</b>. Por exemplo, o programa codificado no <b>exemplo02.c</b> faz a formatação de data númerica para texto. A execução do programa:
```console
user@user-pc:~$ ./exemplo02 10 12 20
```
```c
    argv[1] //recebe o valor 10
    argv[2] //recebe o valor 12
    argv[3] //recebe o valor 20
```
### Exemplo 02
Para compilar com o GCC faça:
```console
user@user-pc:~$ gcc exemplo02.c -o nome_executavel
```
Para executar o programa:
```console
user@user-pc:~$ ./nome_executavel 10 12 20
```
Resultado da execução do programa:
```console
user@user-pc:~$ 10 de dezembro de 2020
```