#include "addressbook.h"

int main(int argc, char ** argv)
{
    char * choice;
    char * tok;
    int i;
    TelephoneBookList * list = createTelephoneBookList();
    TelephoneBookList * tempList = createTelephoneBookList();
    TelephoneBookNode * node;

    printf("--------------------------------------------------------------------\n");
    printf("Student name: Mert Atakan\n");
    printf("Student number: 3457702\n");
    printf("Advanced Programming Techniques, Assignment Two, Semester 1, 2016\n\n");


    if(argv[1] != NULL) {
        tempList = commandLoad(argv[1]);
        // TODO Unload list
        /*
        for (i = 0; i < tempList->size; i++) {

            node = tempList->head;
            printf("%d", node->id);
            node = node->nextNode;

        }
         */
    }

    printf("Enter your command: ");


    //choice = validateString();
/*
    if((tok = strtok(choice," ")) && strcmp(tok, COMMAND_LOAD) == 0)

        commandLoad(tok);

    if(1==1){

    }
            else {

        printf(">Opening the file ");
        printf("%s.\n", tok);
        printf(">Error: Unable to find the specified file.");

    }

        printf("NAH MATE");
*/
    return EXIT_SUCCESS;
}







/*void showMenu(){

    char * choice;
    char * tok;
    char buffer[512];
    int line = 0;

    printf("--------------------------------------------------------------------\n");
    printf("Student name: Mert Atakan\n");
    printf("Student number: 3457702\n");
    printf("Advanced Programming Techniques, Assignment Two, Semester 1, 2016\n\n");
    printf("Enter your command: ");

    if(argv[1]){

    }

    choice = validateString();

        if((tok = strtok(choice," ")) && strcmp(tok, COMMAND_LOAD) == 0){

            tok = strtok(NULL, " ");


                FILE * fp = fopen(tok, "r");

                while(fp != NULL || buffer != feof(fp)) {
                    fgets(buffer, 512, fp);
                    printf("%s", buffer);
                }

                fclose(fp);


            if((tok = strtok(choice, ".")) && strcmp(tok, "txt") != 0){

                printf("hmm");
            }

            else {

                printf(">Opening the file ");
                printf("%s.\n", tok);
                printf(">Error: Unable to find the specified file.");

            }

        }

        else printf("NAH MATE");


}
*/