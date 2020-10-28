Algoritmo "media"

Var
a,b,c,media:real
d:inteiro

Inicio

escreval("primeiro numero")
leia(a)
escreval("segundo numero")
leia(b)
escreval("terceiro numero")
leia(c)

media <- (a+b+c)/3

se a>media entao
   d<-d+1
fimse

se b>media entao
   d<-d+1
fimse

se c>media entao
   d<-d+1
fimse

escreva(d)

Fimalgoritmo