#include "commands.h"

TelephoneBookList * commandLoad(char * fileName)
{
    TelephoneBookList * list = createTelephoneBookList();
    TelephoneBookNode * node = NULL;
    char * tok;
    int id = 0, i;
    char buffer[512];
    char deli[3] = ", ";

        FILE * fp = fopen(fileName, "r");

        while(fp != NULL && !feof(fp)) {

            fgets(buffer, 512, fp);
            if(!feof(fp)){

                if(buffer[0] == '#'){

                }

                else {
                    printf("%s", buffer);
                    node = createTelephoneBookNode();
                    /* unitl here */

                    tok = strtok(buffer, deli);

                    if(tok == NULL){
                        printf("%s", "warning");
                    }

                    id = atoi(tok);

                    node->id = id;

                    tok = strtok(NULL, deli);

                    strcpy(node->name, tok);

                    tok = strtok(NULL, deli);
                    tok[strlen(tok)-1] = 0;

                    strcpy(node->telephone, tok);
                    insert(list, node);
                    node = NULL;
                    tok = NULL;
                    id = 0;
                    for(i =0;i < 512; i++){
                        buffer[i] = '\0';
                    }
                }
            }
        }
        fclose(fp);
    printf("%s", "THIS IS FINISHED");
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
