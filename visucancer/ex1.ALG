Algoritmo "ph"

Var
ph:inteiro

Inicio

repita
   escreval("entre com o pH da solução")
   leia(ph)
ate ph>0 ou ph<14

se ph<7 entao
   escreval("pH: ",ph+". solução ácida")
senao
   se ph>7 entao
      escreval("pH: ",ph+". solução básica")
   senao
      escreval("pH: ",ph+". solução neutra")
   fimse
fimse

Fimalgoritmo