#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(){
    Queue* fila = create_queue();
    enqueue(fila, 1);
    enqueue(fila, 2);
    enqueue(fila, 3);
    enqueue(fila, 4);
    print_queue(fila);
    dequeue(fila);
    print_queue(fila);
    printf("%d \n", front(fila));
    printf("Está vazia? %s", is_empty(fila) ? "sim\n" : "não\n");
    free_queue(fila);
    return 0;
}