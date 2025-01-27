#ifndef __FILA_H__
#define __FILA_H__

typedef struct Node{
    int valor;
    struct Node* next;
} Node;

typedef struct Queue{
    Node* begin;
    Node* end;
    int size;
} Queue;

Node* create_no(int valor);
Queue* create_queue();
void enqueue(Queue* queue, int valor);
int dequeue(Queue* queue);
int front(Queue* queue);
int is_empty(Queue* q);
void print_queue(Queue* queue);
void free_queue(Queue* queue);

#endif