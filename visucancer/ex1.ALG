Algoritmo "ph"

Var
ph:inteiro

Inicio

repita
   escreval("entre com o pH da solu��o")
   leia(ph)
ate ph>0 ou ph<14

se ph<7 entao
   escreval("pH: ",ph+". solu��o �cida")
senao
   se ph>7 entao
      escreval("pH: ",ph+". solu��o b�sica")
   senao
      escreval("pH: ",ph+". solu��o neutra")
   fimse
fimse

Fimalgoritmo