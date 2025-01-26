#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

No* create_no(int valor){
    No* no = (No*) malloc(sizeof(No));
    no->valor = valor;
    no->proximo = NULL;
    return no;
}

Stack* create_pilha(){
    Stack* pilha = (Stack*) malloc(sizeof(Stack));
    pilha->quantidade = 0;
    pilha->topo = NULL;
    return pilha;
}

void push(Stack* pilha, int valor){
    No* no = create_no(valor);
    no->proximo = pilha->topo;
    pilha->topo = no;
    pilha->quantidade++;
}

void free_stack(Stack* pilha){
    while (pilha->topo != NULL){
        No* no_superior = pilha->topo;
        pilha->topo = pilha->topo->proximo;
        free(no_superior);
    }
    free(pilha);
}

Status pop(Stack* pilha){
    Status retorno;
    if (pilha->quantidade == 0){
        retorno.status = FALSE;
        return retorno;
    } 
    retorno.numero = pilha->topo->valor;
    retorno.status = TRUE;
    No* no_aux = pilha->topo;
    pilha->topo = pilha->topo->proximo;
    free(no_aux);
    pilha->quantidade--;
    return retorno;
}

int peek(Stack* pilha){
    if (pilha->quantidade != 0){
        int no_superior = pilha->topo->valor;
        return no_superior;
    }
}

Status is_empty(Stack* pilha){
    Status estado;
    if (pilha->quantidade == 0){
        estado.status = FALSE;
    } else{
        estado.status = TRUE;
    }
    return estado;
}

void print_stack(Stack* pilha){
    No* no_impressao = pilha->topo;
    while (no_impressao != NULL){
        printf("%d ", no_impressao->valor);
        no_impressao = no_impressao->proximo;
    }
    printf("\n");
}