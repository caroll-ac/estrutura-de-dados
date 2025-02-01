#include <stdio.h>
#include "bubble.h"
#include "lista.h"
#include "student.h"

int main(){
    List* lt = create_list();

    insert(lt, 0, create_student("José", 10, "janeiro"));
    insert(lt, 1 , create_student("Ana", 15, "dezembro"));
    insert(lt, 2 , create_student("Ryan", 5, "julho"));
    insert(lt, 3 , create_student("Clara", 20, "setembro"));
    insert(lt, 1 , create_student("Carlos", 2, "março"));

    print_list(lt);

    printf("\nLista ordenada por nome: \n");
    bubble_sort(lt, name_key);
    print_list(lt);

    printf("\nLista ordenada por Idade:\n");
    bubble_sort(lt, age_key);
    print_list(lt);

    printf("\nLista ordenada por aniversário\n");
    bubble_sort(lt, birthday_key);
    print_list(lt);

    free_list(lt);

    return 0;
}