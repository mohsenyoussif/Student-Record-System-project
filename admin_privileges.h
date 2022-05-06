//
// Created by mohsen on 5/3/2022.
//

#ifndef STUDENT_RECORD_SYSTEM_PROJECT_ADMIN_PRIVILEGES_H
#define STUDENT_RECORD_SYSTEM_PROJECT_ADMIN_PRIVILEGES_H

void set_admin_password();

int check_admin_password(char* password);

int Add_student_record();

int Remove_student_record(int id);

int Edit_student_grade(int id, int grade);

int Edit_student_name(int id, char *name);

int Edit_student_password(int id, char *password);

int View_student_record(int id);

int View_all_records();

void Edit_admin_password(char* password);

#endif //STUDENT_RECORD_SYSTEM_PROJECT_ADMIN_PRIVILEGES_H
