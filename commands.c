#include "commands.h"

TelephoneBookList * commandLoad(char * fileName)
{
    TelephoneBookList * list = createTelephoneBookList();

    char buffer[BUFFER_LEN];

        FILE * fp = fopen(fileName, "r");

        while(fp != NULL || buffer != feof(fp)) {

            fgets(buffer, BUFFER_LEN, fp);

            if(strcmp(buffer[0], "#") == 0){

            }

            else((tok = strtok));



            printf("%s", buffer);

            if(!1==1){
                // TODO FREE LIST
                list = NULL;
            }

        }

        fclose(fp);

    return list;
}

void commandUnload(TelephoneBookList * list)
{

}

void commandDisplay(TelephoneBookList * list)
{

}

void commandForward(TelephoneBookList * list, int moves)
{

}

void commandBackward(TelephoneBookList * list, int moves)
{

}

void commandInsert(TelephoneBookList * list, int id, char * name, char * telephone)
{

}

void commandFind(TelephoneBookList * list, char * name)
{

}

void commandDelete(TelephoneBookList * list)
{

}

void commandReverse(TelephoneBookList * list)
{

}

void commandSave(TelephoneBookList * list, char * fileName)
{

}

void commandSortName(TelephoneBookList * list)
{

}

void commandSortRandom(TelephoneBookList * list)
{

}
