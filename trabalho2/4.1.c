#include <stdio.h>
#include <math.h>

int main()
{

    //declaração da e leitura da variável da ordem da matriz
    double n;
    //printf("Entre com a dimensão da matriz quadrada: ");
    scanf("%lf", &n);

    double matriz[(int)n][(int)n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%lf", &matriz[i][j]);
        }
    }

    printf("Matriz lida: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%.0lf ", matriz[i][j]);
        }
        printf("\n");
    }

    //declara o primeiro elemento como
    //menor elemento da área hachurada
    double menor = matriz[0][0];

    //declaração da variável que irá determinar
    //a linha do menor elemento da área hachurada
    int ln;

    //procura o menor elemento na área hachurada,
    //salvando elemento e a linha
    for (int l = 0; l < n; l++)
    {
        for (int c = 0; c < n - l; c++)
        {
            if (matriz[l][c] < menor)
            {
                menor = matriz[l][c];
                ln = l;
            }
        }
    }

    //declara o maior elemento como 0
    double maior = 0;

    //itera a linha achada em busca do maior valor
    for (int c = 0; c < n; c++)
    {
        if (matriz[ln][c] > maior)
        {
            maior = matriz[ln][c];
        }
    }

    printf("Menor elemento da área hachurada: %.0lf\n", menor);
    printf("Linha do menor elemento: %d\n", ln + 1);
    printf("Maior elemento da linha: %.0lf\n", maior);

    return 0;
}