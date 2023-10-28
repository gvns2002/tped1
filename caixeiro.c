#include <stdio.h>
#include "caixeiro.h"

Cidade** aloca(int quantCidades){
    Cidade** matriz = (Cidade**)malloc(quantCidades * sizeof(*Cidade));
    for(int i = 0; i < quantCidades; i++)
        matriz[i] = (Cidade*)malloc(quantCidades * sizeof(Cidade));
    return matriz;
}

void libera(Cidade** info ,int quantCidades){
    for(int i = 0; i < quantCidades; i++)
        free(info[i]);
    free(info);
}
