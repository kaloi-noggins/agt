Algoritmo "baskaralho"

Var
a,b,c,delta,x1,x2:real
Inicio
escreval("entre com a")
leia(a)
escreval("entre com b")
leia(b)
escreval("entre com c")
leia(c)

delta <- (b^2)-(4*a*c)

se delta < 0 entao
   escreval("Não há raízes reais para a equação de entrada")
senao
   x1 <- (-b+raizq(delta))/2*a
   x2 <- (-b-raizq(delta))/2*a
   escreval("raiz 1: ",x1)
   escreval("raiz 2: ",x2)
fimse

Fimalgoritmo