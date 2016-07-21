#include <stdio.h>

int main(int argc, char *argv[])
{
    int numbers[4] = {3};       /*This is a short-cut that C has where, if you set just one element, it'll fill the rest in with 0.*/
    char name[4] = {'a', 'b', 'c'}; // this one is less comon then Ln44

    // first, print them out raw
    printf("numbers: %d %d %d %d\n",
            numbers[0], numbers[1],
            numbers[2], numbers[3]);

    printf("name each: %c %c %c %c\n",  // This actually is : a b \0 \0
            name[0], name[1],
            name[2], name[3]);

    printf("name: %s\n", name);


    // setup the numbers
    numbers[0] = 1;
    numbers[1] = 'a';       // this gives a corresponding Int output
    numbers[2] = 3;
    numbers[3] = 4;

    // setup the name
    name[0] = 'Z';
    name[1] = 'e';
    name[2] = 'd';
    name[3] = '\0';
        /*Always keep in mind to put \0 at the end of string
        this is inconvenient and often bugs */

    // then print them out initialized
    printf("numbers: %d %d %d %d\n",
            numbers[0], numbers[1],
            numbers[2], numbers[3]);

    printf("name each: %c %c %c %c\n",
            name[0], name[1],
            name[2], name[3]);

    // print the name like a string
    printf("name: %s\n", name);


    // printf("name_wrong: %d\n", name);                         //wrong

    // printf("number all: %d\n", numbers);

    // another way to use name
    char *another = "Zed";              // this one is more common then Ln6

    printf("another: %s\n", another);

    printf("another each: %c %c %c %c\n",           //
            another[0], another[1],
            another[2], another[3]);                //the '\0' won't be printed

    // printf("another each_error1: %s %c %c %c\n",           //this will have "Segmentation fault"
    //         another[0], another[1],
    //         another[2], another[3]);

    // printf("another each_error2: %c %c %c %c\n",     //this will have "Bus error"
    //         another[0]='s', another[1],
    //         another[2], another[3]);

    int numberName[] = {100, 101, 102, 100};             // use int to represent chracter
    printf("numberName: %c %c %c %c\n",
                    numberName[0], numberName[1],
                    numberName[2], numberName[3]);



    char a = 'c';
    printf("%ld\n", sizeof(a));
    //
    // printf("numberName_another: %s\n", numberName);
    //         /*This only get character d bc:
    //         size of a char = 1  (1byte = 8 bits)
    //         size of a int = 4   (4bytes = 32bits)
    //         So when apply {'a', 'b'} to numberName::char, it looks like {'a', 'b'} or {97, 98}
    //            when apply {'a', 'b'} to numberName::Int , it looks like {'a''\0''\0''\0', 'b''\0''\0''\0'} or {97 0 0 0, 98 0 0 0}
    //         And for declare %s, it stop when meets \0.
    //         So only the first char will appear on the terminal.
    //         One can try to make the 1st charNumber = 1633771873. These equal to 5 bytes
    //         */

    return 0;
}



/* Bus errors are rare nowadays on x86 and occur when your processor cannot even attempt the memory access requested, typically:
using a processor instruction with an address that does not satisfy its alignment requirements.

Segmentation faults occur when accessing memory which does not belong to your process, they are very common and are typically the result of:
1. using a pointer to something that was deallocated.
2. using an uninitialized hence bogus pointer.
3. using a null pointer.
4. overflowing a buffer.
*/