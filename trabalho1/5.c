#include <stdio.h>

#define len 20
int array[len];

void swap()
{
    int arrayTemp[len];
    arrayTemp[0] = array[0];
    for (int i = 0; i < len; i++)
    {
        if ((i++) % 2 == 0)
        {
            arrayTemp[i] = array[i + 1];
            arrayTemp[i + 1] = array[i];
        }
    }

    for (int i = 0; i < len; i++)
    {
        array[i] = arrayTemp[i];
    }
}

//reciclado da atividade 4
void printaArray()
{
    printf("{ ");
    for (int i = 0; i < len; i++)
    {
        printf(" %d ", array[i]);
    }
    printf(" }\n");
}

int main()
{
    for (int i = 0; i < len; i++)
    {
        printf("Entre com o termo %d do vetor: ", (i + 1));
        scanf("%d", &array[i]);
    }

    //print array normal
    printf("Array original: ");
    printaArray();
    //swap de pares por impares
    swap();
    //print do vetor trocado
    printf("Array trocado: ");
    printaArray();

    return 0;
}