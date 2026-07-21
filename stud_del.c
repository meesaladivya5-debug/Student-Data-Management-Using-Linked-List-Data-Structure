#include"header.h"
void stud_del(student **head)
{
	if(*head==0)
	{
		printf("*** NO RECORDS PRESENT ***\n");
		return;
	}
	char choice;
	printf("r/R : enter rollno to delete\n n/N : enter name to delete\n");
	scanf(" %c",&choice);


	if(choice=='r'||choice=='R')
	{
		int rollno;
		printf("enter a rollno: ");
		scanf("%d",&rollno);
		student *del= *head,*prev=0;
		while(del)
		{
			if(del->rollno==rollno)
			{
				if(prev)
					prev->next=del->next;
				else
					*head=del->next;
				free(del);
				printf("Record is deleted\n");
				return;
			}
			prev=del;
			del=del->next;
		}
		printf("Rollno not is found");
	}
	else if (choice == 'n' || choice == 'N')
	{
		char name[50];
		printf("Enter name: ");
		scanf("%s", name);
		student *del = *head, *prev = 0;
		while (del) 
		{
			if (strcmp(del->name, name) == 0) 
			{
				printf("Deleting rollno %d with name %s\n", del->rollno, del->name);
				if (prev) 
					prev->next = del->next;
				else 
				*head = del->next;
				free(del);
				return;
			}
			prev = del;
			del = del->next;
		}
		printf("Name not found.\n");
	}

}


