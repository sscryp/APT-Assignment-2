#include "addressbook.h"

int main(int argc, char ** argv)
{
    showMenu();

    return EXIT_SUCCESS;
}

void showMenu(){

    char * choice;

    printf("--------------------------------------------------------------------\n");
    printf("Student name: Mert Atakan\n");
    printf("Student number: 3457702\n");
    printf("Advanced Programming Techniques, Assignment Two, Semester 1, 2016\n\n");
    printf("Enter your command: ");

    choice = validateString();

    if(choice == "quit"){

        return;
    }

}