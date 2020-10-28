#include <stdio.h>
#include <math.h>

int main()
{

    //declaraçao da variável da ordem da matriz
    double n;
    printf("Entre com a dimensão da matriz quadrada: ");
    scanf("%lf", &n);

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

    //armazena a soma dos elementos da área hachurada superior
    double sum1 = 0;
    //armazena o número de elementos contados na área hachurada
    double count = 0;

    //percorre a metade superior da matriz
    //partindo da posição 0,0
    for (int l = 0; l < ceil(n / 2); l++)
    {
        for (int c = l; c < n - l; c++)
        {
            sum1 += matriz[l][c];
            count++;
        }
    }

    printf("Soma da área hachurada superior: %.0lf\n", sum1);

    //armazena a soma dos elementos da área hachurada inferior
    double sum2 = 0;
    //percorre a metade inferior da matriz
    //partindo da posição n,n
    for (int l = n - 1; l > ceil(n / 2) - 2; l--)
    {
        for (int c = n - l - 1; l > c - 1; c++)
        {
            sum2 += matriz[l][c];
            count++;
        }
    }

    printf("Soma da área hachurada inferior: %.0lf\n", sum2);
    printf("Soma total da área hachurada: %.0lf\n", sum1 + sum2);
    printf("Total de elemento da área hachurada: %.0lf\n", count);
    printf("Media aritmetica: %.2lf\n", (sum1 + sum2) / count);

    return 0;
}