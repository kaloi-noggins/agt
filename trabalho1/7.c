#include <stdio.h>

#define len 9
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

//Preenche um array temporário. Após, compara com o array final
//Se o array temporário não for zero na posição i, e o array final for,
//sobrescreve o valor do array final na posição i
void filler()
{
    int arrayTemp[len];
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arrayTemp[i]);
    }
    for (int i = 0; i < len; i++)
    {
        if (array[i] == 0 && arrayTemp[i] != 0)
        {
            array[i] = arrayTemp[i];
        }
    }
}

int main()
{
    //inicializacao do array
    for (int i = 0; i < len; i++)
    {
        array[i] = 0;
    }

    //chama a função de preenchimento 3 vezes, por estar esperando 3 arrays
    for (int i = 0; i < 3; i++)
    {
        filler();
    }

    //print do resultado
    printf("RESP = ");
    printaArray();
    return 0;
}