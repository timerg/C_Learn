#include <stdio.h>
#include <ctype.h>
#include <string.h>

// forward declarations
int can_print_it(char ch);
void print_letters(char arg[]);
//tell machine that you will be using some functions later in your program, without having to actually define them.
// Ln4, 5 is needed because these two funcs are used before they are defined.

void print_arguments(int argc, char *argv[])
{
    int i = 0;

    for(i = 0; i < argc; i++) {
        print_letters(argv[i]);
    }
}

void print_letters(char arg[])
{
    int i = 0;

    for(i = 0; i <= strlen(arg); i++) {
        char ch = arg[i];

        if(can_print_it(ch)) {
            printf("'%c' == %d ", ch, ch);
        }
    }

    printf("\n");
}

int can_print_it(char ch)
{
    return isalpha(ch) || isblank(ch);
}


int main(int argc, char *argv[])
{
    print_arguments(argc, argv);
    return 0;
}



/*
Void means "nothing" or "no type" baiscally.
3 basic ways that void is used:
Function argument: int myFunc(void) -- the function takes nothing.
Function return value: void myFunc(int) -- the function returns nothing
Generic data pointer: void* data -- 'data' is a pointer to data of unknown type, and cannot be dereferenced
*/