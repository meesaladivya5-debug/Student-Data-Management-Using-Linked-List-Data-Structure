#include "header.h"

int main() {
    student *head=0;
    char choice;
    while (1) {
        printf("\033[31m***** STUDENT RECORD MENU ******\n\033[0m");
        printf("\033[1m");
        printf("a/A : add new record\n");
        printf("d/D : delete a record\n");
        printf("s/S : show the list\n");
        printf("m/M : modify a record\n");
        printf("v/V : save\n");
        printf("e/E : exit\n");
        printf("t/T : sort the list\n");
        printf("l/L : delete all the records\n");
        printf("r/R : reverse the list\n");
        printf("\033[0m");
        printf("Enter your choice:\n");
        scanf(" %c", &choice);

        switch (choice) 
{
            case 'a': case 'A': stud_add(&head); break;
            case 'd': case 'D': stud_del(&head); break;
            case 's': case 'S': stud_show(head); break;
            case 'm': case 'M': stud_mod(&head); break; 
            case 'v': case 'V': stud_save(head); break;
            case 'e': case 'E': save_exit_menu(head); break; 
	    case 't': case 'T': sort_list(head); break;
            case 'l': case 'L': stud_delete_all(&head); break; 
            case 'r': case 'R': stud_reverse(&head); break; 
            default: printf("\033[32m*** YOU ENTERED UNKNOWN CHOICE ***\n\033[0m");
        }
    }
}



