#include "student.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Student* create_student(const char* name, const int age, const char* birthday){
    Student* st = (Student*) malloc(sizeof(Student));

    st->name = (char*) malloc(strlen(name)+1); // '/0'
    strcpy(st->name, name);
    st->age = age;
    st->birthday = (char*) malloc(strlen(birthday)+1);
    strcpy(st->birthday, birthday);
    
    return st;
} // end create_student()

void print_student(Student* st){
    printf("name: %s, age: %d, birthday: %s\n", st->name, st->age, st->birthday);
} //end print_student()

void free_students(Student* st){
    free(st->name);
    free(st->birthday);
    free(st);
} //end free_student