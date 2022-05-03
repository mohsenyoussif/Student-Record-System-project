//
// Created by mohsen on 5/3/2022.
//
#include <stdio.h>
#include <string.h>
#include "struct.h"
#include "system.h"
#include "admin_privileges.h"
void choose_System(void)
{
    int Local_choose =0;
    printf("Choose which mode you want :\n");
    printf("Enter 1 to Admin mode OR Enter 2 to User mode :-\n");
    scanf("%d",&Local_choose);
    if(Local_choose==1)
    {
        admin_check();
    }
    else if(Local_choose==2)
    {
        user_mode();
    }
    else
    {
        printf("Wrong choice !!\n Please Enter a correct choice :-\n");
        choose_System();
    }
}
void admin_check(void)
{
   static int trial =3;
   int result ;
    char Local_Password[10] ;
    if(trial==0)
    {
        printf("Sorry !! You can't login as an admin!!");
        choose_System();
    }
    printf("Please Enter your Password :-\n");
    scanf("%s",Local_Password);
    result = strcmp(Local_Password,"1111");
    if(result==0)
    {
        admin_mode();
    }
    else
    {
        printf("Wrong Password!!\n");
        trial--;
        admin_check();
    }
}
void admin_mode(void)
{
    int choice =0;
    printf("**********Welcome To Admin mode**********\n");
    printf("To Add student record,Enter 1\n"
           "To Remove student record,Enter 2\n"
           "To Edit student record,Enter 3\n"
           "To View student record,Enter 4\n"
           "To View all records,Enter 5\n"
           "To Edit admin password,Enter 6/n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 : Add_student_record();  break ;
        case 2 : Remove_student_record();  break ;
        case 3 : Edit_student_record();  break ;
        case 4 : View_student_record();  break ;
        case 5 : View_all_records();     break;
        case 6 : Edit_admin_password();  break ;
        default : printf("Wrong Choice!!,please Enter a correct choice & repeat the trial \n"); break;

    }
}
void user_mode(void)
{

}

