#include <stdio.h>
#include <math.h>
#define len 10

int main()
{
    int array[len], termo;
    for (int i = 0; i < len; i++)
    {
        printf("Entre com o termo %d do array: ", (i + 1));
        scanf("%d", &array[i]);
    }

    printf("Entre com o termo de busca: ");
    scanf("%d", &termo);

    int inicio = 0, fim = len - 1, meio = (inicio + fim) / 2;

    while (inicio <= fim)
    {
        if (array[meio] < termo)
            inicio = meio + 1;
        else if (array[meio] == termo)
        {
            printf("\nTermo achado na posicao %d\n", (meio + 1));
            break;
        }
        else
            fim = meio - 1;

        meio = (inicio + fim) / 2;
    }
    if (inicio > fim)
        printf("\nO termo nao existe no array\n");
    return 0;
}