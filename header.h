#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

typedef struct student
{
	int rollno;
	char name[30];
	float percentage;
	struct student *next;
}student;



void stud_add(student **);
int next_rollno(student *);
void stud_del(student **);
void stud_show(student *);
void stud_mod(student **);
void stud_save(student *);
void sort_rollno(student *);
void sort_list(student *);


void stud_delete_all(student **);
void stud_reverse(student **);
void save_exit_menu(student *head);













