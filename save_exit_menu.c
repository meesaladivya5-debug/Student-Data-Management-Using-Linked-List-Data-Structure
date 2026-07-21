#include"header.h"

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















