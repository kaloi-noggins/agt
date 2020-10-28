#include <stdio.h>

#define len 20
int array[len];

//serve para printar o array
void printaArray()
{
    printf("{ ");
    for (int i = 0; i < len; i++)
    {
        printf(" %d ", array[i]);
    }
    printf(" }\n");
}

//realoca todos os 0 do array para o final do mesmo
void despacito(int max)
{
    for (int i = 0; i < max; i++)
    {
        if (array[i] == 0)
        {
            array[i] = array[max];
            array[max] = 0;
            despacito(max - 1);
        }
    }
}

int main()
{
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &array[i]);
    }
    despacito(len);
    printf("Saida = ");
    printaArray();
    return 0;
}