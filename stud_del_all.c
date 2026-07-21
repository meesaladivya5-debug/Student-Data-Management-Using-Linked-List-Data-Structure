#include"header.h"
void stud_delete_all(student **head)
{
	if(*head==0)
	{
		printf("*** NO RECORDS FOUND ***\n");
		return;
	}
	int c=1;
	student *del=*head;
	while(del)
	{
		*head=del->next;
		free(del);
		printf("Delete Node:%d\n",c++);
		sleep(1);
		del=*head;
	}
	printf("ALL THE NODES DELETED\n");
}













