#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    if(argc == 1) {
        printf("You only have one argument. You suck.\n");
    } else if(argc > 1 && argc < 4) {
        printf("Here's your arguments:\n");

        for(i = 0; i < argc; i++) {
            printf("%s ", argv[i]);
        }
        printf("\n");
    } else {
        printf("You have too many arguments. You suck.\n");
    }
    /* If the Last "else" block doesn't add add more than 3 args are given,
    Nothing happen since this can't be caught */

    return 0;
}

/*
If the && in Ln7 is replaced by ||, the last "else" block won't happen
    since every thing is already caught by the "else if" block
*/


/*
if(TEST) {
    CODE;}
else if(TEST) {
    CODE;}
else {
    CODE;}
*/