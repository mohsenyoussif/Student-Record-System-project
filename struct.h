//
// Created by Mohsen on 5/3/2022.
//

#ifndef STUDENT_RECORD_SYSTEM_PROJECT_STRUCT_H
#define STUDENT_RECORD_SYSTEM_PROJECT_STRUCT_H

#define NO_OF_STUDENTS     20

typedef struct Student {
    char *name;
    char *password;
    int id;
    int total_grade;
} Student_t;

#endif //STUDENT_RECORD_SYSTEM_PROJECT_STRUCT_H
