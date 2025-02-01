#include "student.h"
#include <stdio.h>

int main(){
    Student* st = create_student("Ana Caroline", 20, "setembro");
    print_student(st);
    free_students(st);

    return 0;
}