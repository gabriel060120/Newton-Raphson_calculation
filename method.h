
float funcao_x(float x)
{
    return ((exp(x))+(x/2));
}

float d_funcao_x(float x)
{
    return((exp(x)) + 0.5);
}

float newtonraphson(float x0, float precisao, FILE* arquivo)
{
    float x1, x1_anterior;
    int iteracoes = 0;

    x1_anterior = 2 * precisao;

    printf("\ni, xi, xi+1, precisao\n");
    fprintf(arquivo, "\ni,xi,xi+1,precisão\n");

    while(fabs(x1 - x1_anterior) > precisao)
    {
        x1_anterior = x0;
        x1 = x0 - (funcao_x(x0)/d_funcao_x(x0));
        x0 = x1;

        iteracoes++;

        printf("%d, %f, %f, %f\n", iteracoes, x1_anterior, x1, precisao);
        fprintf(arquivo, "%d,%f,%f,%f\n", iteracoes, x1_anterior, x1, precisao);
    }

    return x1;

}