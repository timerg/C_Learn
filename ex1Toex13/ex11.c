#include <stdio.h>

int main(int argc, char *argv[])
{
    // go through each string in argv

    int i = 1;
    char *k[] = {"\0", "\0"};

    while(i < argc) {
        printf("arg %d: %s\n", i, argv[i]);
        k[i] = argv[i];
        i++;
    }

    // let's make our own array of strings
    char *states[] = {
        "California", "Oregon",
        "Washington", "Texas"
    };

    int num_states = 1;
    i = 4;              // since "while can't initialize itself. One do it externally"
    while(i >= num_states) {
        printf("state %d: %s\n", i, states[i - 1]);
        i--;
    }

    while(i < 4) {
        printf("statearg %d: %s\n", i, k[i - 1]);
        i++;
    }

    return 0;
}


/*
while(TEST) {
    CODE;}
The TEST parts are false if they evaluate to 0, and true otherwise.

If one wants to use while to replicate how the for-loop works,
    he needs to do his own initializing and incrementing of i.
In your own code you should favor for-loop constructs over while-loop
    because a for-loop is harder to break.
*/