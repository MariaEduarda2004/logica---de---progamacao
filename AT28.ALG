Algoritmo "AT28"

Var
nome, sexo:caractere
x, h, m:inteiro


Inicio
para x de 1 ate 100 faca
limpatela
escreva("Digiti o nome: ")
leia(nome)
escreval("[H] - Homem")
escreval("[M] - Mulher")
leia(sexo)
escolha sexo
caso "H"
h <- h + 1
caso "M"
m <- m +1
outrocaso
escreval("Sexo só pode H ou M !")
fimescolha
fimpara
limpatela
escreval("Foram um total de",h," homens")
escreval("Foram um total de",m," mulheres")


Fimalgoritmo