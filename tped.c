#include <stdio.h>
#include "caixeiro.h"

typedef struct{

    int cidades;
    int distancia;

}Cidade;

int main()
{
    int quantCidades;

    scanf("%d", &quantCidades);

    Cidade** info;
    info = aloca(quantCidades); 

    for(int i = 0; i < quantCidades; i++)
        for(int j = 0; j < quantCidades; j++){
            getchar();
            scanf("%d%d", &info[i][j].cidades, &info[i][j].distancia);
    }




    libera(info, quantCidades);

    return 0;
}

