#include"header.h"

void stud_add(student **head)
{
	student *newnode;
	newnode=malloc(sizeof(student));

	newnode->rollno = next_rollno(*head);
	printf("Enter name: ");
	scanf(" %[^\n]",newnode->name);
	printf("Enter percentage: ");
	scanf("%f",&newnode->percentage);

	newnode->next=0;		
	if(*head==0)
		*head=newnode;
	else
	{
		student *last=*head;
		while(last->next!=0)
			last=last->next;
		last->next=newnode;
	}
	printf("Recored is added successfully\n");
}

int next_rollno(student *head) 
{
	int roll = 1;
	struct student *temp;
	while (1) 
	{
		temp = head;
		int found = 0;
		while (temp != NULL)
		{
			if (temp->rollno == roll)
			{
				found = 1;
				break;
			}
			temp = temp->next;
		}
		if (!found) 
			return roll;
		roll++;
	}
}


