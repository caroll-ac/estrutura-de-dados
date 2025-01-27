#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

#define TRUE 1
#define FALSE 0

Node* create_no(int valor){
    Node* node = (Node*) malloc(sizeof(Node));
    node->valor = valor;
    node->next = NULL;
    return node;
}
Queue* create_queue(){
    Queue* queue = (Queue*) malloc(sizeof(Queue));
    queue->begin = NULL;
    queue->end = NULL;
    queue->size++;
    return queue;
}

void enqueue(Queue* queue, int valor){
    Node* node = create_no(valor);
    if (queue->end != NULL){
        queue->end->next = node;
    } else{
        queue->begin =node;
    }
    queue->end = node;
    queue->size++;
}

int dequeue(Queue* queue){
    if (queue->begin == NULL){
        return 0;
    } 
    Node* aux = queue->begin;
    int valor = aux->valor;
    queue->begin = aux->next;

    free(aux);
    queue->size--;
    return valor;
}

int front(Queue* queue){
    return queue->begin->valor;
}

int is_empty(Queue* queue){
    return ((queue->begin == NULL) ? TRUE : FALSE);
    }

void print_queue(Queue* queue){
    Node* aux = queue->begin;
    while (aux != NULL){
        printf("%d ", aux->valor);
        aux = aux->next;
    }
    printf("\n");
}

void free_queue(Queue* queue){
    Node* aux = queue->begin;
    Node* temp;
    while (aux != NULL){
        temp = aux;
        aux = aux->next;
        free(temp);
    }
    free(queue);
}