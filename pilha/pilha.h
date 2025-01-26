#ifndef __PILHA_H__
#define __PILHA_H__

#define TRUE 1
#define FALSE 0

typedef struct No{
    int valor;
    struct No* proximo;
} No;

typedef struct Stack{
    int quantidade;
    No* topo;
} Stack;

typedef struct Status{
    int numero;
    int status; //0 falso, 1 verdadeiro
} Status;

No* create_no(int valor);
Stack* create_pilha();
Status is_empty(Stack* pilha);

Status pop(Stack* pilha);

void push(Stack* pilha, int valor);
void free_stack(Stack* pilha);
int peek(Stack* pilha);
void print_stack(Stack* pilha);



#endif