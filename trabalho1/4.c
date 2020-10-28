#include <stdio.h>

//definição do tamanho e do array
#define len 20
int array[len];

void inverteArray()
{
    int arrayTemp[len];

    for(int i=0; i<len;i++)
    {
        arrayTemp[i]=array[(len-1)-i];
    }
    for(int i=0; i<len;i++)
    {
        array[i]=arrayTemp[i];
    }
}

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

    //printa o array original
    printf("Array original: ");
    printaArray();
    //inverte o array
    inverteArray();
    //printa o array invertido
    printf("Array invertido: ");
    printaArray();

    return 0;
}