// 1 Q: Ln10
#include <stdio.h>

int main(int argc, char *argv[])
{
    char full_name[] = {
        'Z', 'e', 'd',
        ' ', 'A', '.', ' ',
        'S', 'h', 'a', 'w', '\0'          //if don't add '\0', sth get error
                                    //? the valgrind still show nothing error. Don't know why
    };
    int areas[] = {areas[0] = 100, 10, 12, 13, 14, 20};
    char name[] = "Zed";                // if i specified name[3], then Ln33 is froced to result in size = 3.

    // WARNING: On some systems you may have to change the
    // %ld in this code to a %u since it will use unsigned ints
    printf("The size of an int: %ld\n", sizeof(int));       /* the size is still 4bytes even my OS is 64bits.
                                    This is meant to avoid the complication of transformation btw different OS. */
                                    /*when using "size of", it should always be "ld".*/
    printf("The size of areas (int[]): %ld\n",
            sizeof(areas));
    printf("The number of ints in areas: %ld\n",
            sizeof(areas) / sizeof(int));
    printf("The first area is %d, the 2nd %d.\n",
            areas[0], areas[1]);

    printf("The size of a char: %ld\n", sizeof(char));
    printf("The size of name (char[]): %ld\n",  /* the size=4 for "Zed". =1 for "". So there are always a "implicit Nul terminator"
                                             which i guess is to make empty char* be able to be initialized. */
                                                /* the memory can't hold nothing. the \0 is taken to fill the empty.
                                             ex: if  name[8] = "AAA", the other 4 (8-3-1) will be filled with \0 automatically. */
            sizeof(name));
    printf("The number of chars: %ld\n",
            sizeof(name) / sizeof(char));

    printf("The size of full_name (char[]): %ld\n",
            sizeof(full_name));
    printf("The number of chars: %ld\n",
            sizeof(full_name) / sizeof(char));

    printf("name=\"%s\" and full_name=\"%s\"\n",
            name, full_name);

    return 0;
}