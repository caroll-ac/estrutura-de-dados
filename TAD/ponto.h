#ifndef __PONTO_H__
#define __PONTO_H

typedef struct Ponto {
    float x;
    float y;
} Ponto;

//cria novo ponto
Ponto* p_cria(float x, float y);
void p_libera(Ponto* p);
float p_distancia(Ponto* p1, Ponto* p2);

#endif