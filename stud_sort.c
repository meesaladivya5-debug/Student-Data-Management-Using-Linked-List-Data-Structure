#include "header.h"

int count_node(student *ptr)
{
	int c=0;
	while(ptr)
	{
		c++;
		ptr=ptr->next;
	}
	return c;
}

void sort_rollno(student *ptr)
{
	if(ptr==0)
		return;
	student *p1=ptr,*p2,t;
	int i,j,c=count_node(ptr);
	for(i=0;i<c-1;i++)
	{
		p2=p1->next;
		for(j=0;j<c-1-i;j++)
		{
			if(p1->rollno > p2->rollno)
			{
				t.rollno=p1->rollno;
				strcpy(t.name,p1->name);
				t.percentage=p1->percentage;

				p1->rollno=p2->rollno;
				strcpy(p1->name,p2->name);
				p1->percentage=p2->percentage;

				p2->rollno=t.rollno;
				strcpy(p2->name,t.name);
				p2->percentage=t.percentage;
			}
			p2=p2->next;
		}
		p1=p1->next;
	}
}

void sort_list(student *ptr)
{
	system("clear");
	if(ptr==0)
	{
		printf("No records found\n");
		return;
	}
	int i,j,c=count_node(ptr);
	student *p1=ptr,*p2,t;
	char op;
	printf("\033[31mEnter\nR/r : sort with rollno\nN/n : sort with name\nP/p : sort with percentage\033[0m\n");
	scanf(" %c",&op);
	if(op=='r' || op=='R')
	sort_rollno(ptr);
	else if(op=='N' || op=='n')
	{
		for(i=0;i<c-1;i++)
		{
			p2=p1->next;
			for(j=0;j<c-1-i;j++)
			{
				if(strcmp(p1->name,p2->name)>0)
				{
					t.rollno=p1->rollno;
					strcpy(t.name,p1->name);
					t.percentage=p1->percentage;

					p1->rollno=p2->rollno;
					strcpy(p1->name,p2->name);
					p1->percentage=p2->percentage;

					p2->rollno=t.rollno;
					strcpy(p2->name,t.name);
					p2->percentage=t.percentage;
				}
				p2=p2->next;
			}
			p1=p1->next;
		}
	}
	else if(op=='P' || op=='p')
	{
		for(i=0;i<c-1;i++)
		{
			p2=p1->next;
			for(j=0;j<c-1-i;j++)
			{
				if(p1->percentage > p2->percentage)
				{
					t.rollno=p1->rollno;
					strcpy(t.name,p1->name);
					t.percentage=p1->percentage;

					p1->rollno=p2->rollno;
					strcpy(p1->name,p2->name);
					p1->percentage=p2->percentage;

					p2->rollno=t.rollno;
					strcpy(p2->name,t.name);
					p2->percentage=t.percentage;
				}
				p2=p2->next;
			}
			p1=p1->next;
		}
	}
	else
		printf("Unknown option\n");
	printf("\033[31m******* Sorted list successfully *******\033[0m\n");
}
