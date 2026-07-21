#include"header.h"
void stud_mod(student **head)
{
	if(*head==0)
	{
		printf("*** No records present ***\n");
		return;
	}
	char choice;
	int roll;
	char name[30];
	float percentage;
	student *temp = *head;

	printf("Enter which record to search for modification\n");
	printf("R/r : to search a rollno\n");
	printf("N/n : to search a name\n");
	printf("P/p : percentage based\n");
	scanf(" %c", &choice);

	switch(choice)
	{
		case 'R': case 'r':
			printf("Enter rollno to modify: ");
			scanf("%d", &roll);
			while(temp)
			{
				if(temp->rollno == roll)
				{
					printf("Enter new name and percentage:\n");
					scanf("%s %f", temp->name, &temp->percentage);
					printf("Record modified successfully.\n");
					return;
				}
				temp = temp->next;
			}
			printf("Rollno not found.\n");
			break;

		case 'N': case 'n':
			printf("Enter name to search: ");
			scanf("%s", name);
			while(temp) 
			{
				if(strcmp(temp->name, name) == 0) 
				{
					printf("Record found with name %s (rollno %d).\n", temp->name, temp->rollno);
					printf("Enter rollno to conform to modification: ");
					scanf("%d", &roll);
					if(temp->rollno == roll) 
					{
						printf("Enter new name and percentage:\n");
						scanf("%s %f", temp->name, &temp->percentage);
						printf("Record modified successfully.\n");
						return;
					}
				}
				temp = temp->next;
			}
			printf("Name not found.\n");
			break;

		case 'P': case 'p':
			printf("Enter percentage to search: ");
			scanf("%f", &percentage);
			while(temp) 
			{
				if(temp->percentage == percentage) 
				{
				printf("Record found with percentage %.2f (rollno %d).\n", temp->percentage, temp->rollno);
					printf("Enter rollno to conform to modification: ");
					scanf("%d", &roll);
					if(temp->rollno == roll) 
					{
						printf("Enter new name and percentage:\n");
						scanf("%s %f", temp->name, &temp->percentage);
						printf("Record modified successfully.\n");
						return;
					}
				}
				temp = temp->next;
			}
			printf("Percentage not found.\n");
			break;

		default: printf("My Dear! your are Entered Invalid option.\n");
	}
}




