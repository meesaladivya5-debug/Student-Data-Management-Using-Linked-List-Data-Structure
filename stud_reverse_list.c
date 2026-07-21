#include"header.h"
void stud_reverse(student **head)
{
	if(*head==0)
	{
		printf("*** NO RECORDS PRESENT TO REVERSE THE LIST ***\n");
		return;
	}
	struct student *prev = 0, *first = *head, *next = 0;

	while (first != 0) 
	{
		next = first->next;   // store next node
		first->next = prev;   // reverse link
		prev = first;         // move prev forward
		first = next;         // move curr forward
	}
	*head = prev;  // update head to new first node
	printf(":::: LIST REVERSED SUCCESSFULLY ::::\n");

}






