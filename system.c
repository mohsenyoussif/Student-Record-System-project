//
// Created by mohsen on 5/3/2022.
//
#include <stdio.h>
#include <string.h>
#include "stdlib.h"
#include "system.h"
#include "struct.h"
#include "privileges.h"
extern int reserved_pos;
extern Student_t student[NO_OF_STUDENTS];

void choose_System(void) {
    int Local_choose = 0;
    printf("Choose which mode you want :\n");
    printf("Enter :\n1 to Admin mode\n2 to User mode\n3 to Exit :-\n");
    scanf("%d", &Local_choose);
    if (Local_choose == 1) {
        admin_check();
    } else if (Local_choose == 2) {
        user_check();
    }else if(Local_choose == 3){
        exit(1);
    }
    else {
        printf("Wrong choice !!\n Please Enter a correct choice :-\n");
        choose_System();
    }
}

void admin_check(void) {
    static int trial = 3;
    char Local_Password[10];
    if (trial == 0) {
        printf("Sorry !! You can't login as an admin!!");
        choose_System();
    }

    printf("Please Enter your Password :-\n");
    scanf("%s", Local_Password);
  if(check_admin_password(Local_Password)==1)
  {
        admin_mode();
    } else {
        printf("Wrong Password!!\n");
        trial--;
        admin_check();
    }
}

void admin_mode(void) {

    printf("\n**********Welcome To Admin mode**********\n");
    printf("To Add student record,Enter 1\n"
           "To Remove student record,Enter 2\n"
           "To Edit student name,Enter 3\n"
           "To Edit student password,Enter 4\n"
           "To Edit student total grade,Enter 5\n"
           "To View student record,Enter 6\n"
           "To View all records,Enter 7\n"
           "To Edit admin password,Enter 8\n"
           "To return to main menu,Enter 9\n");
    admin_control();
}

void admin_control() {
    int choice = 0;
    int id = 0;
    char name[10];
    char password[10];
    int grades = 0;
    char admin_password[10];
    scanf("%d", &choice);
    switch (choice) {
        case 1 :
            if (Add_student_record()) {
                printf("Student has been Added Successfully(*_*)\n");
            } else {
                printf("There is no space!!\n");
            }
            break;
        case 2 :
            printf("Enter the ID  :-");
            scanf("%d", &id);
            if (Remove_student_record(id)) {
                printf("The student with ID = %d is removed successfully(*_*)\n", id);
            } else {
                printf("sorry Wrong ID!!\n");
            }
            break;
        case 3 :
            printf("Enter the ID  :-");
            scanf("%d", &id);
            printf("Enter the new name of the student :-\n");
            scanf("%s", name);
            if (Edit_student_name(id, name)) {
                printf("The name of student with ID = %d is updated(*_*)\n", id);
            } else {
                printf("sorry Wrong ID!!\n");
            }
            break;

        case 4:
            printf("Enter the ID  :-");
            scanf("%d", &id);
            printf("Enter the new password of the student :-\n");
            scanf("%s", password);
            if (Edit_student_password(id, password)) {
                printf("The password  of student with ID = %d is updated(*_*)\n", id);
            } else {
                printf("sorry Wrong ID!!\n");
            }
            break;
        case 5 :
            printf("Enter the ID\n");
            scanf("%d", &id);
            printf("Enter the new grade of the student :-\n");
            scanf("%d", &grades);
            if (grades > 100 || grades < 0) {
                printf("Sorry total grades should be between 0 to 100 .\n");
                admin_mode();
            } else {
                if (Edit_student_grade(id, grades)) {
                    printf("The total grade  of student with ID = %d is updated(*_*)\n", id);
                } else {
                    printf("sorry Wrong ID!!\n");
                }
            }
        case 6 :
            printf("Enter the ID\n");
            scanf("%d", &id);
            if (View_student_record(id)) {

            } else {
                printf("sorry Wrong ID!!\n");
            }
            break;
        case 7 :

            if (View_all_records()) {

            } else {
                printf("Sorry The System is Empty !!\n");
            }
            break;
        case 8 :
            printf("Enter the new Password :-\n");
            scanf("%s", admin_password);
            Edit_admin_password(admin_password);
            break;
        case 9 :
            choose_System();
            break;
        default :
            printf("Wrong Choice!!,please Enter a correct choice from 1 to 9  & repeat the trial \n");
            break;

    }
    admin_mode();
}

void user_check(void) {
 int id,i;
 static int trial =3;
 char password[20];
  if(trial==0)
  {
      printf("\nYou have exceeded the maximum number of attempts\n");
      exit(1);
  }
 printf("\nEnter your id :: ");
    scanf("%d",&id);
    printf("\n Enter your password::");
    scanf("%s",password);
    student[reserved_pos].password = (char *) malloc(strlen(password) + 1);
    for(i=0;i<reserved_pos;i++)
    {
        if(id==student[i].id && strcmp(password,student[i].password)==0)
        {

            user_mode(id,password);

        }
        else
        {
            printf("\n Sorry !! The login failed, Try again\n");
            --trial;
            user_check();
        }
    }

}
void user_mode(int id,char* password) {
    printf("\n**********Welcome To User mode**********\n");
    printf("To view your record,Enter 1\n"
           "To Edit your password,Enter 2\n"
           "To return to main menu,Enter 3\n");
    user_choice(id,password);
}
void user_choice(int id,char* password)
{
    int choice ;

    char student_password[20];

    scanf("%d",&choice);

    switch (choice)
    {

          case 1 : if (View_student_record(id))
        {
            user_mode(id,password);
        }else

        {
            printf("\nSorry!!login is failed , Try again\n");

            user_check();
        }break;
        case 2 :
           printf("Enter the new password of the student :-\n");
            scanf("%s", student_password);
            if (Edit_student_password(id, student_password)) {
                printf("The password  of student with ID = %d is updated(*_*)\n", id);
                user_mode(id,student_password);
            } else {
                printf("sorry Wrong ID!!\n");

                user_check();
            }
            break;
        case 3 :  choose_System();
        default:  printf("Wrong Choice!!,please Enter a correct choice 1 or 2 & repeat the trial \n");
        break;
    }
      user_check();
}

