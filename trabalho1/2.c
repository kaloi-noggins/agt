#include <stdio.h>

void divisores(int m)
{
    //checa divisores de m
    int ndiv = 0;
    printf("lista de divisores: (");
    for (int i = 1; i <= m; i++)
    {
        if (m % i == 0)
        {
            printf(" %d", i);
            ndiv += 1;
        }
    }
    printf(" ); %d divisores\n", ndiv);
}

int fatorial(int m)
{
    //calcula fatoria de m (n = n * (n-1))
    int fat = 1;
    for (int i = 1; i <= m; i++)
    {
        if (m == 1)
        {
            return fat;
        }
        fat *= i;
    }
    return fat;
}

void somatoria(int m)
{
    //calcula somatoria de 1 até m
    int sum = 0;
    for (int i = 1; i <= m; i++)
    {
        sum += i;
    }
    printf("somatorio %d = 1 + 2 + ... + %d = %d\n", m, m, sum);
}

int main()
{
    int cond = 1, m = 0;
    while (cond != 0)
    {
        printf("Entre com um numero inteiro maior que 0:\n");
        scanf("%d", &m);

        if (m < 1)
        {
            cond = 0;
        }
        else
        {
            if (m % 2 != 0 && m > 12)
            {
                somatoria(m);
            }
            if (m % 2 != 0 && m < 12)
            {
                printf("Fatorial de %d = %d\n", m, fatorial(m));
            }
            if (m % 2 == 0)
            {
                divisores(m);
            }
        }
    }
}