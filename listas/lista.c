#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

#define TRUE 1
#define FALSE 0

No* cria_no(int numero){
    No* no = (No*) malloc(sizeof(No));
    no->valor = numero;
    no->proximo = NULL;

    return no;
}//end cria_no

Lista* cria_lista(void){
    Lista* lista = (Lista*) malloc(sizeof(Lista));
    lista->tamanho = 0;
    lista->inicio = NULL;

    return lista;
}//end cria_lista

void add(Lista* lista, int valor){
    No* no = cria_no(valor);
    no->proximo = lista->inicio;
    lista->inicio = no;
    lista->tamanho++;
}//end add

int isEmpty(Lista* lista){
    return ((lista->inicio == NULL) ? TRUE : FALSE);
}//end isEmpty

void append(Lista* lista, int valor){
    No* no = cria_no(valor);
    if (isEmpty(lista)){
        add(lista, valor);
    } else{
        No* no_atual = lista->inicio;
        while(no_atual->proximo != NULL){
            no_atual = no_atual->proximo;
        }
        no_atual->proximo = no;
    }
    lista->tamanho++;
}//end append


void imprime_lista(Lista* lista){
   No* no_atual = lista->inicio;
   while(no_atual != NULL){
    printf("%d ", no_atual->valor);
    no_atual = no_atual->proximo;
   }
   printf("\n");
}//end imprime_lista

void insert(Lista* lista, int posicao, int valor){
    No* no = cria_no(valor);
    if (posicao == 0){
        add(lista, valor);
    } else {
        No* anterior = lista->inicio;
        for (int i=0; i < (posicao-1) ; i++){
            anterior = anterior->proximo; 
        }
        
        no->proximo = anterior->proximo;
        anterior->proximo = no;
        lista->tamanho++;
    }
}//end insert