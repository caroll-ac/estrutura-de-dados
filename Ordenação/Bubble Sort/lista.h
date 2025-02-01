#ifndef __LISTA_H__
#define __LISTA_H__

#include "student.h"

typedef struct Node{
    Student* data;
    struct Node* next;
} Node;

typedef struct List{
    int size;
    Node* head;
} List;

Node* create_node(Student* st);
List* create_list(void);

void insert(List* lt, int pos, Student* st);
int isEmpty(List* lt);
void print_list(List* lt);
void free_node(Node* node);
void free_list(List* lt);

#endif