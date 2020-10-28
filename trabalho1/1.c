#include <stdio.h>
#include <math.h>

/*retorna 0 se primo e 1 se nao*/
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

int main()
{
    float phi1 = (1 + sqrt(5)) / 2;
    float phi2 = (1 - sqrt(5)) / 2;
    int fibn = 0;

    for (int i = 2; i < 31; i++)
    {
        fibn = (pow(phi1, i) - pow(phi2, i)) / sqrt(5);
        int retorno = checaPrimalidade(fibn);

        if (retorno == 1)
        {
            printf("%d nao e primo\n", fibn);
        }
        else
        {
            printf("%d e primo\n", fibn);
        }
    }
}