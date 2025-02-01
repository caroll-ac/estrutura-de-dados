#ifndef __BUBBLE_H__
#define __BUBBLE_H__

#include "lista.h"
#include "student.h"

int name_key(Student* st1, Student* st2);
int age_key(Student* st1, Student* st2);
int number_month(const char* month);
int birthday_key(Student* st1, Student* st2);

void bubble_sort(List* lt, int (*sort_key)(Student* st1, Student* st2));

#endif