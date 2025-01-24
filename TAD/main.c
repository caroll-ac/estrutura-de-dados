#include <stdio.h>
#include "ponto.h"

int main(){
    float d;
    Ponto *p, *q;
    p = p_cria(10,4);
    q = p_cria(7,21);
    d = p_distancia(p,q);
    printf("Distância é %f", d);
    return 0;
}