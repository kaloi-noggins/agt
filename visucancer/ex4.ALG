Algoritmo "frequencia"

Var
a,b,c,freq,media:real
nome,status:caracter
Inicio
escreval("nome")
leia(nome)
escreval("nota 1")
leia(a)
escreval("nota 2")
leia(b)
escreval("nota 3")
leia(c)
escreval("frequencia(0-100)")
leia(freq)

media<- (a+b+c)/3

se freq<75 entao
   status <- "reprovado"
senao
     se media<7 entao
        status <- "em exame"
     senao
        status <- "aprovado
     fimse
fimse

escreval("nome: ",nome)
escreval("media: ",media)
escreval("status: ",status)
Fimalgoritmo