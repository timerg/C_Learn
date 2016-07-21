#include <stdio.h>
/*In computer programming languages,
a switch statement is a type of selection control mechanism used to
allow the value of a variable or expression
to change the control flow of program execution
via a multiway branch.
It exist in imperative languages using such keywords as switch, case, select or inspect
*/

// ! Always default & Always break after case
int main(int argc, char *argv[])
{
    if(argc != 2) {
        printf("ERROR: You need one argument.\n");
        // this is how you abort a program
        return 1;
    }  //Doing a return that's not 0 is how you indicate to the OS that the program had an error.

    int i = 0;

//////// Two ways to initialize letter
    // char letter = argv[1][i];
    // for(i = 0, letter = argv[1][i]; argv[1][i] != '\0'; i++) {
// the above is still trying. the 'i' in letter can't be updated now

    for(i = 0; argv[1][i] != '\0'; i++) {
        char letter = argv[1][i];

////////
        switch(letter) {
            case 'a':
            case 'A':
                printf("%d: 'A'\n", i);
                break;

            case 'e':
            case 'E':
                printf("%d: 'E'\n", i);
                break;

            case 'i':
            case 'I':
                printf("%d: 'I'\n", i);
                break;

            case 'o':
            case 'O':
                printf("%d: 'O'\n", i);
                break;

            case 'u':
            case 'U':
                printf("%d: 'U'\n", i);
                break;

            case 'y':
            case 'Y':
                if(i > 2) {
                    // it's only sometimes Y
                    printf("%d: 'Y'\n", i);
                }
                break;

            default:
                printf("%d: %c is not a vowel\n", i, letter); //Always include a default: branch so that you catch any missing inputs.
        }

    }

    return 0;
}