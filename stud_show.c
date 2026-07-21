#include "header.h"
void stud_show(student *head) 
{
	if (head==0)
	{
		printf("No records to show.\n");
		return;
	}

	printf("RollNo Name  Percentage\n");
	while (head)
	 {
		printf("%d  %s     %.2f\n", head->rollno, head->name, head->percentage);
		head = head->next;
	}
}

