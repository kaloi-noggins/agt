#include <stdio.h>
#include <math.h>

int nPrimos = 0;

//retorna 0 se primo e 1 se nao
//reciclado do problema 1
int checaPrimalidade(int n)
{
    if (n == 1)
    {
        return 1;
    }

    for (int i = 2; i <= 30; i++)
    {
        if ((n % i == 0) && (n != i))
        {
            return 1;
        }
    }
    return 0;
}

//gera um número perfeito a partir de um dado primo
void geraPerfeito(int i)
{
    //porque a fórmula de Eclides não funciona com 11
    if (i != 11)
    {
        int perfeito = pow(2, i - 1) * (pow(2, i) - 1);
        printf("Numero perfeito %d : %d\n", (nPrimos + 1), perfeito);
        nPrimos++;
    }
}

int main()
{
    int i = 1;
    while (nPrimos < 5)
    {
        if (checaPrimalidade(i) == 0)
        {
            geraPerfeito(i);
        }
        i++;
    }

    return 0;
}
