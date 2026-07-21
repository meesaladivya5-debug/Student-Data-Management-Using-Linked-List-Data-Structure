#include"header.h"

void stud_save(student *head)
{
	FILE *fp;
	fp = fopen("student.data", "w");
	if (head == 0) 
	{
		printf("No records present\n");
		return;
	}

	//fp = fopen("student.data", "w");
	student *temp = head;
	while (temp) 
	{
		 fprintf(fp, "%d %s %.2f\n", temp->rollno, temp->name, temp->percentage);
		temp = temp->next;
	}
	
	fclose(fp);
	printf("::::: DATA SAVED SUCCESSFULLY :::::\n");
}

/*
void save_exit_menu(student *head) 
{
	char ch;
	printf("S/s : save and exit\nE/e : exit without saving\n");
	scanf(" %c", &ch);

	if (ch == 'S' || ch == 's') 
	{
		stud_save(head);
		exit(0);
	} 
	else if (ch == 'E' || ch == 'e') 
	{
		exit(0);
	}
	else
	{
		printf("Invalid choice!\n");
	}
}

*/



