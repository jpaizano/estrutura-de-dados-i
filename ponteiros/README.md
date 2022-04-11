# Ponteiros
Um ponteiro (= apontador = pointer) é um tipo especial de variável que armazena um endereço.  Um ponteiro pode ter o valor <b>NULL</b> que é um endereço inválido. A macro <b>NULL</b> está definida na interface <b>stdlib.h</b> e seu valor é 0 (zero) na maioria dos computadores.

Se um ponteiro <b>p</b> armazena o endereço de uma variável <b>i</b>, podemos dizer  p aponta para i  ou <b>p</b> é o endereço de <b>i</b>. Em termos um pouco mais abstratos, diz-se que <b>p</b> é uma referência à variável <b>i</b>. Se um ponteiro <b>p</b> tem valor diferente de <b>NULL</b> então <b>&#42;p</b> é o valor da variável apontada por <b>p</b>. Não confunda esse operador <b>&#42;</b> com o operador de multiplicação! Por exemplo, se <b>i</b> é uma variável e <b>p</b> vale <b>&i</b> então dizer <b>&#42;p</b> é o mesmo que dizer <b>i</b>. (Referência: <a href="https://www.ime.usp.br/~pf/algoritmos/aulas/pont.html">ime.usp.br/</a>)

Suponha que a, b e c são variáveis inteiras e veja um de fazer  c = a + b:
```c
int *p;  // p é um ponteiro para um inteiro
int *q;  // q é um ponteiro para um inteiro
p = &a;  // o valor de p é o endereço de a
q = &b;  // q aponta para b
c = *p + *q;
```
## Código Exemplo 01
O programa <b>exemplo01.c</b> faz troca de valores entre as váriveis <b>a</b> e <b>b</b> através da passagem de ponteiros para a função de <b>troca()</b>. 

Para compilar com o GCC faça:
```console
user@user-pc:~$ gcc exemplo01.c -o nome_executavel
```
Para executar o programa:
```console
user@user-pc:~$ ./nome_executavel
```