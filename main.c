#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "method.h"


int main ()
{
    float raiz;
    FILE* arquivo = NULL;
    float x;
    float precisao = 0.0001;

    arquivo = fopen("newtonraphson_Exercicio_2.csv", "wt");
    if(arquivo == NULL)
    {
        exit(0);
    }

    printf("Insira o valor de x:");
    scanf("%f", &x);

    raiz = newtonraphson(x, precisao, arquivo);

    printf("\nraiz = %f", raiz);
    fprintf(arquivo, "\nraiz = %f", raiz);

    fclose(arquivo);

    return 0;
}