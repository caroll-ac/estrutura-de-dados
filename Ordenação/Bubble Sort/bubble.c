#include "bubble.h"
#include <stdio.h>
#include <string.h>

int name_key(Student* st1, Student* st2){
    return strcmp(st1->name, st2->name);
}//end name_key

int age_key(Student* st1, Student* st2){
    return st1->age - st2->age;
}//end age_key

int number_month(const char* month){
    const char* months[] = {"janeiro", "fevereiro", "março", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};
    for (int i = 0; i < 12; i++) { 
        if (strcmp(month, months[i]) == 0)
            return i +1;
    }
}
int birthday_key(Student* st1, Student* st2) {
    int month1 = number_month(st1->birthday);
    int month2 = number_month(st2->birthday); 
    return month1 - month2;
}


void bubble_sort(List* lt, int (*sort_key)(Student* st1, Student* st2)){
    Node* p_aux = NULL;
    Student* p_st = NULL;
    int result;

    if (isEmpty(lt))
        return;
    for (int i = 0; i < lt->size-1; i++){
        p_aux = lt->head;
        for (int j = 0; j < lt->size-1-i; j++){
            result = sort_key(p_aux->data, p_aux->next->data);
            if (result > 0){
                p_st = p_aux->data;
                p_aux->data = p_aux->next->data;
                p_aux->next->data = p_st;
            }
            p_aux = p_aux->next;
        }
    }
}//end bubble_key