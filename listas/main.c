#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(){
    Lista* lista = cria_lista();

    add(lista, 4);
    add(lista, 5);
    add(lista, 6);
    append(lista, 0);
    append(lista, 1);
    imprime_lista(lista);

    printf("Está vazia? %s.", isEmpty(lista) ? "sim" : "não");
    printf("\n");

    insert(lista, 2, 100);
    imprime_lista(lista);
    insert(lista, 0, -1);
    imprime_lista(lista);
    return 0;
}