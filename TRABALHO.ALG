Algoritmo "Trabalho2"

Var
a, b, c:inteiro


Inicio
escreval("Digiti três números")
leia(a, b, c)
se (a > b) e (b > c)entao
escreva(c, b, a)
senao
se (b > a) e (b > c) e (a > c) entao
escreva(c, b, a)
senao
se (b > a) e (b > c) e (a < c)entao
escreva(a, c, b)
senao
se (b > a) e (b < c)entao
escreva(a, b, c)
senao
se (b < a) e (a < c) entao
escreva(b, a, c)
senao
se (b < c) e (c < a)entao
senao
escreval(a, b, c)
fimse
fimse
fimse
fimse
fimse
fimse







Fimalgoritmo