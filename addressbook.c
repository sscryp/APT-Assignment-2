#include "addressbook.h"

int main(int argc, char ** argv)
{
    showMenu();

    return EXIT_SUCCESS;
}

void showMenu(){

    char * choice;
    char * tok;
    char input[0];
    int line = 0;
    FILE * pToSmall = fopen("small_addressbook.txt", "r");
    FILE * pToMedium = fopen("medium_addressbook.txt", "r");
    FILE * pToLarge = fopen("large_address.txt", "r");


    printf("--------------------------------------------------------------------\n");
    printf("Student name: Mert Atakan\n");
    printf("Student number: 3457702\n");
    printf("Advanced Programming Techniques, Assignment Two, Semester 1, 2016\n\n");
    printf("Enter your command: ");

    choice = validateString();

    //do{

        if((tok = strtok(choice," ")) && strcmp(tok, COMMAND_LOAD) == 0){

            tok = strtok(NULL, " ");

            if(strcmp(tok, "small_addressbook.txt") == 0) {

                    printf(">Opening the file ");
                    printf("%s.\n", tok);
                    fgets(input, 0, pToSmall);
                    printf("%s", input);
                    fclose(pToSmall);



            }

            else if((tok = strtok(choice, ".")) && strcmp(tok, "txt") != 0){

                printf("hmm");
            }

            else {

                printf(">Opening the file ");
                printf("%s.\n", tok);
                printf(">Error: Unable to find the specified file.");

            }

        }

        else printf("NAH MATE");

    //}while(strcmp(choice, COMMAND_QUIT) != 0);


}
