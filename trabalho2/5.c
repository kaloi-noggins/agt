#include <stdio.h>
#include <math.h>

int main()
{

    //declaração da ordem da matriz
    double n = 12;

    double matriz[(int)n][(int)n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%lf", &matriz[i][j]);
        }
    }

    //Print da matriz lida
    printf("Matriz lida: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%.0lf ", matriz[i][j]);
        }
        printf("\n");
    }

    //declaração valor para ser comparado com o maior
    double maior = -99;

    //itera a metade superior, indo do inicio até a metade
    for (int l = 0; l < n / 2; l++)
    {
        for (int c = 0; c < n; c++)
        {
            if (matriz[l][c] > maior)
            {
                maior = matriz[l][c];
            }

            //se a linha for igual a coluna,
            //acrescenta um salto
            if (l == c)
            {
                c += n - 2 * (1 + c);
            }
        }
    }

    //itera a metade inferior, indo final até a metade
    for (int l = n - 1; l > n / 2; l--)
    {
        for (int c = n - 1; c > 0; c--)
        {
            if (matriz[l][c] > maior)
            {
                maior = matriz[l][c];
            }

            //se a linha for igual a coluna,
            //acrescenta um salto
            if (l == c)
            {
                c += n - 2 * (1 + c);
            }
        }
    }
    printf("Maior elemento achado na área hachurada: %.0lf\n", maior);
    return 0;
}