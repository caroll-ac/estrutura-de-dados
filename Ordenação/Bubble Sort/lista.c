#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

Node* create_node(Student* st){
    Node* no_st = (Node*) malloc(sizeof(Node));
    no_st->data = st;
    no_st->next = NULL;
    return no_st;
} //end create_node

List* create_list(){
    List* lt = (List*) malloc(sizeof(List));
    lt->head = NULL;
    lt->size = 0;
    return lt; 
} //end create_list

void insert(List* lt, int pos, Student* st){
    Node* node = create_node(st);
    
    if (pos<0 || pos>lt->size){
        free_students(st);
        return;
    }
    if(pos==0){
        node->next = lt->head;
        lt->head = node;
    } else{
        Node* aux = lt->head;
        for(int i = 0; i<pos-1;i++){ //parar em uma posicao anterior para nao dar default fragmentation
            aux = aux->next;
        }
        node->next = aux->next;
        aux->next = node;
    }
    lt->size++;
} //end insert

int isEmpty(List* lt){
    return lt->size == 0;
} //end isEmpty

void print_list(List* lt){
    Node* aux = lt->head;
    Student* st = NULL;
    while(aux != NULL){
        st = aux->data;
        print_student(st);
        aux = aux->next;
    }
} // end print_list

void free_node(Node* node){
    free_students(node->data);
    free(node);
} //end free_node

void free_list(List* lt){
    Node* aux = lt->head;
    while(aux != NULL){
        lt->head = lt->head->next;
        free_node(aux);
        aux = lt->head;
    }
} //end free_list
