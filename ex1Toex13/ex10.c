#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;
    int k = 1;

    // go through each string in argv
    // why am I skipping argv[0]?
    for(i = 0; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }
    // the 0th argument is "./ex10"

    // let's make our own array of strings
    char *states[] = {
        "California", "Oregon",
        "Washington", "Texas", NULL
    };
    int num_states = 5;         // if this num bigger than 4, seg fault will occur since one try to access memory that don't exit

    for(i = 0, k = 0; k < num_states && i < num_states; k++, i++) {
        printf("state %d: %s\n", i, states[i]);
    }
    /* Note the "&&" shouldn't be replaced by ",". This will give a
     "relational comparison result unused" */

    return 0;
}

/*
The format of a for-loop is this:
for(INITIALIZER; TEST; INCREMENTER) {
    CODE;}
The TEST parts are false if they evaluate to 0, and true otherwise.


*/