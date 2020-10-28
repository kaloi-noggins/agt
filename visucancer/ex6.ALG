Algoritmo "calculadora"

Var
a,b,res:real
c:caracter

Inicio

escreval("entre com o primeiro valor")
leia(a)
escreval("entre com o segundo valor")
leia(b)

repita
   escreval("entre com um operador (+,-,x,:)")
   leia(c)
ate (c<>"+") ou (c<>"-") ou (c<>"x") ou (c<>":")

escolha c
   caso "+"
      res <- a+b
   caso "-"
      res <- a-b
   caso "x"
      res <- a*b
   caso ":"
      res <- a/b
fimescolha

escreval("resultado: ",res)
Fimalgoritmo