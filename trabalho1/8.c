#include <stdio.h>
#include <stdbool.h>

#define len 20
int array[len];
int listaRepetidos[len];

//checa se um elemento ja foi contado como repetido
bool checaRepetido(int termo)
{
    for (int i = 0; i < len; i++)
    {
        if (listaRepetidos[i] == termo)
        {
            return true;
        }
    }
    return false;
}
main()
{
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &array[i]);
        //seta um valor de referencia para o array
        listaRepetidos[i] = -99;
    }

    for (int i = 0; i < len; i++)
    {
        int flag = -99, count = 1;
        for (int j = i + 1; j < len; j++)
        {
            if (array[i] == array[j] && checaRepetido(array[i]) == false)
            {
                flag = array[i];
                count++;
            }
        }
        if (flag != -99)
        {
            listaRepetidos[i] = flag;
            printf("\n%d: repete %d vezes\n", flag, count);
        }
    }
    return 0;
}