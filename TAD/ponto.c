#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ponto.h"

Ponto* p_cria(float x, float y){
    Ponto* p = (Ponto*) malloc(sizeof(Ponto));
    p->x = x;
    p->y = y;
    return p;
}//end Ponto

void p_libera(Ponto* p){
    free(p);
}//end p_libera

float p_distancia(Ponto* p1, Ponto* p2){
    float dx = p1->x - p2->x;
    float dy = p1->y - p2->y;
    return sqrt(dx*dx + dy*dy);
}//end p_distancia