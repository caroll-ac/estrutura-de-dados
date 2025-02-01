#ifndef __STUDENT_H__
#define __STUDENT_H__

typedef struct Student{
    char* name;
    int age;
    char* birthday;
}Student;

Student* create_student(const char* name, const int age, const char* birthday);
void print_student(Student* st);
void free_students(Student* st);

#endif