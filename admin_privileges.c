//
// Created by USER on 5/3/2022.
//
#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "admin_privileges.h"
#include "struct.h"
#define safeFree(p) saferFree((void**)&(p))
static void saferFree(void **pp);
static int available_pos=0;
Student_t student[20];

int Add_student_record()
{
    int localStateError=0;
    char newName[10];
    char newPassword[10];
    if(available_pos<=20){
    printf("********** Enter the data of the student to add **********\n ");
    printf("Enter the ID of the student :-\n");
    scanf("%d",&student[available_pos].id);
    printf("Enter the student password :\n");
    scanf("%s",newPassword);
    student[available_pos].password = (char*)malloc(strlen(newPassword)+1);
    strcpy(student[available_pos].password,newPassword);
    printf("Enter the student name :-\n");
    scanf("%s",newName);
   student[available_pos].name = (char*)malloc(strlen(newName)+1);
   strcpy(student[available_pos].name,newName);
        if(student[available_pos].total_grade<=100)
       {
            printf("Enter the total percentage grade from 0 to 100:");
             scanf("%d",&student[available_pos].total_grade);
       }else
      {
       printf("Wrong grade !!\n Please enter correct grade from 0 to 100!!\n");
       Add_student_record();
      }
   available_pos++;
      localStateError=1;
    } else
   {
       localStateError=0;
   }
    return  localStateError;
}
static void saferFree(void **pp)
{
    if (pp != NULL && *pp != NULL) {
        free(*pp);
        *pp = NULL;
    }
}
int Remove_student_record()
{

}
int Edit_student_record()
{


}
int View_student_record(int id)
{
    int localStateError=0;
    int i=0;
    for(i=0;i<20;i++)
    {
        if(student[i].id==id)
        {
            printf(" Data of student whose id is %d\n",id);
            printf("The name of student is %s\n",student[i].name);
            printf("The total grade is %d%%\n",student[i].total_grade);
            printf("The password is %s\n ",student[i].password);
            localStateError=1;
        }
    }



    return  localStateError;
}
int View_all_records()
{

}
int Edit_admin_password()
{

}


