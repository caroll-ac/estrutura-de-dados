#ifndef __LISTA_H__
#define __LISTA_H__

typedef struct No{
    int valor;
    struct No* proximo;
} No;

typedef struct Lista{
    int tamanho;
    No* inicio;
} Lista;

No* cria_no(int numero);
Lista* cria_lista(void);

void add(Lista* lista, int valor);
void append(Lista* lista, int valor);
int isEmpty(Lista* lista);
void imprime_lista(Lista* lista);
void insert(Lista* lista, int posicao, int valor);


#endif