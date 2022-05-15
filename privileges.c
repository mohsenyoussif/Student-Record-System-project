//
// Created by USER on 5/3/2022.
//
#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "privileges.h"
#include "struct.h"

#define safeFree(p) saferFree((void**)&(p))


static void saferFree(void **pp);
static char* adminPassword;
 int reserved_pos = 0;

Student_t student[NO_OF_STUDENTS];

void set_admin_password(){
    adminPassword = (char*)malloc(strlen("1111")+1);
    strcpy(adminPassword,"1111");

}
int check_admin_password(char* password)
{
    int check=0;
    if(strcmp(adminPassword,password)==0)
    {
        check=1;
    }else
    {
        check=0;
    }
    return check;
}
int Add_student_record() {
    int localStateError = 0,i;
    char newName[10];
    char newPassword[10];
    if (reserved_pos < NO_OF_STUDENTS) {
        printf("********** Enter the data of the student to add **********\n ");
        printf("Enter the ID of the student :-\n");
        scanf("%d", &student[reserved_pos].id);
        for(i=0;i<reserved_pos;i++)
        {
            if(student[i].id==student[reserved_pos].id)
            {
                printf("sorry!!There is a reserved id , choose another one\n");
                Add_student_record();
            }
        }
        printf("Enter the student password :\n");
        scanf("%s", newPassword);
        student[reserved_pos].password = (char *) malloc(strlen(newPassword) + 1);
        strcpy(student[reserved_pos].password, newPassword);
        printf("Enter the student name :-\n");
        scanf("%s", newName);
        student[reserved_pos].name = (char *) malloc(strlen(newName) + 1);
        strcpy(student[reserved_pos].name, newName);
        printf("Enter the total percentage grade from 0 to 100:");
        scanf("%d", &student[reserved_pos].total_grade);
        if (student[reserved_pos].total_grade <= 100) {
            localStateError = 1;
        } else {
            printf("Wrong grade !!\n Please enter correct grade from 0 to 100!!\n");
            Add_student_record();
        }
        reserved_pos++;
        localStateError = 1;
    } else {
        localStateError = 0;
    }
    return localStateError;
}

static void saferFree(void **pp) {
    if (pp != NULL && *pp != NULL) {
        free(*pp);
        *pp = NULL;
    }
}

int Remove_student_record(int id) {
    int i , localStateError = 0;
    for (i = 0; i < NO_OF_STUDENTS && localStateError == 0; i++) {
        if (student[i].id == id) {
            safeFree(student[i].name);
            safeFree(student[i].password);
            student[i].id = 0;
            student[i].total_grade = 0;
            localStateError = 1;
        } else {
            localStateError = 0;
        }
    }

    return localStateError;
}

int Edit_student_grade(int id, int grade) {
    int i , localStateError = 0;
    for (i = 0; i < NO_OF_STUDENTS && localStateError == 0; i++) {
        if (student[i].id == id) {
            student[i].total_grade = grade;
            localStateError = 1;
        } else {
            localStateError = 0;
        }
    }

    return localStateError;
}

int Edit_student_name(int id, char *name) {
    int i , localStateError = 0;
    for (i = 0; i < NO_OF_STUDENTS && localStateError == 0; i++) {
        if (student[i].id == id) {
            student[i].name = (char *) realloc(student[i].name, strlen(name) + 1);
            strcpy(student[i].name, name);
            localStateError = 1;
        } else {
            localStateError = 0;
        }
    }

    return localStateError;
}

int Edit_student_password(int id, char *password) {
    int i , localStateError = 0;
    for (i = 0; i < NO_OF_STUDENTS && localStateError == 0; i++) {
        if (student[i].id == id) {
            student[i].password = (char *) realloc(student[i].password, strlen(password) + 1);
            strcpy(student[i].password, password);
            localStateError = 1;
        } else {
            localStateError = 0;
        }
    }

    return localStateError;
}


int View_student_record(int id) {
    int localStateError = 0;
    int i ;
    for (i = 0; i < NO_OF_STUDENTS && localStateError == 0; i++) {
        if (student[i].id == id) {
            printf(" Data of student whose id is %d\n", id);
            printf("The name of student is %s\n", student[i].name);
            printf("The total grade is %d%%\n", student[i].total_grade);
            printf("The password is %s\n ", student[i].password);
            localStateError = 1;
        }
        else
        {
            localStateError = 0;
        }
    }
    return localStateError;
}

int View_all_records() {
    int localStateError = 0;
    int i ;
    printf("****************There is the total data of All students****************:\n ");
    for (i = 0; i < reserved_pos ; i++) {
        printf("****************Student Number %d ****************\n",i+1);
        printf("His ID is %d\n",student[i].id);
        printf("His Name is %s\n",student[i].name);
        printf("His Password is %s\n",student[i].password);
        printf("His total grade is %d\n",student[i].total_grade);
        printf("---------------------------------------\n");
        localStateError=1;

    }
    return localStateError;
}

void Edit_admin_password(char* password) {

    adminPassword =(char *) realloc(adminPassword ,strlen(password)+1);
    strcpy(adminPassword,password);

}


