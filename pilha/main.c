#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){
    Stack* pilha = create_pilha();
    peek(pilha);
    push(pilha, 1);
    push(pilha, 2);
    push(pilha, 3);
    push(pilha, 4);
    push(pilha, 5);
    print_stack(pilha);

    printf("%d \n", peek(pilha));
    
    pop(pilha);
    print_stack(pilha);
    pop(pilha);
    print_stack(pilha);
    pop(pilha);
    print_stack(pilha);

    free_stack(pilha);
    
    pilha = create_pilha();
    push(pilha, 00);
    print_stack(pilha);
    free_stack(pilha);

    //Funcionou em todos os casos, agora será feita uma função que
    //checa se uma expressão matemática está correta.

    Stack* stack = create_pilha();
    char equacao[] = "{1-[4*2 + (3*3)]}";

    for (int i=0; equacao[i] != '\0'; i++){
        if(equacao[i] == '{' || equacao[i] == '[' || equacao[i] == '('){
            push(stack, equacao[i]);
        }
        if((peek(stack) == '{' && equacao[i] == '}') || (peek(stack) == '[' && equacao[i] == ']') || (peek(stack) == '(' && equacao[i] == ')')){
            pop(stack);
        }
    }

    if (is_empty(stack).status){
        printf("Está errado \n");
    } else {
        printf("Está certo \n");
    }

    free_stack(stack);

    return 0;
}