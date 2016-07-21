#include <stdio.h>

int main(int argc, char *argv[])
{
    puts("1Hello world. It is sucks. \n What the hell. Wa haha.");

    return 0;
}

/*
For the main function to be totally complete
it needs to return an int and take two parameters:
1. an int for the argument count
2. an array of char * strings for the arguments*/

// if rm "init argc":
//          exl.c:3:5: error: first parameter of 'main' (argument count) must be of type
//         'int'

// if rm char *argv[]
//          exl.c:3:5: warning: only one parameter on 'main' declaration [-Wmain]
//          int main(int argc)

// $ CFLAGS="-Wall" make ex1   the "C...l" is called environment variables. it would add the command line option -Wall to the cc command that make normally runs.

// Run man 3 puts and read about this function and many others.