#include "helpers.h"

#define LINE_LEN 80

void readRestOfLine()
{
    int ch;
    while(ch = getc(stdin), ch != EOF && ch != '\n')
    { } /* Gobble each character. */

    /* Reset the error status of the stream. */
    clearerr(stdin);
}

char * validateString(){
    char line[LINE_LEN + EXTRA_SPACES];
    char *end = malloc(strlen(line) + EXTRA_SPACES);

    fgets(line, LINE_LEN + EXTRA_SPACES, stdin);

    if(line[strlen(line)-1] != '\n'){
        readRestOfLine();
    }

    line[strlen(line) - 1] = 0;
    line[strcspn(line, "\n")] = '\0';
    strcpy(end, line);

    return end;

}
