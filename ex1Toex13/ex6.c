#include <stdio.h>

int main(int argc, char *argv[])
{
    int distance = 100;
    float power = 2.345f;
    double super_power = 56789.4532;
    char initial = 'A';
    char first_name[] = "Zed";      //type name[] = {initializer}
    /*puts the literal string in read-only memory
      and copies the string to newly allocated memory on the stack*/
    char *last_name = "Shaw";
    /*will place "Shaw" in the read-only parts of the memory, and making *... a pointer to that.
      Any writing operation on this memory illegal*/
    // Sum: char * allocates a pointer, while char [] allocates an array.
    int years = 45;

    printf("You are %d miles away.\n", distance);
    printf("You have %f levels of power.\n", power);
    printf("You have %f awesome super powers.\n", super_power);
    printf("I have an initial %c.\n", initial);
    printf("I have a first name %s.\n", first_name);
    printf("I have a middle name %c.\n", first_name[2]);  // this will only give result of "d"
    printf("I have a last name %s.\n", last_name);
    printf("My whole name is %s %c. %s.\n",
            first_name, initial, last_name);
    printf("I have %o years to live. \n", years);

    return 0;
}


/*
When Computer see: type name[] = {initializer};
1. Look at the type, in this first case it's int.
2. Look at the [] and see that there's no length given.
3. Look at the initializer, {10, 12, 13, 14, 20} and figure out that you want those 5 ints in your array.
4. Create a piece of memory in the computer, that can hold 5 integers one after another.
5. Take the name you want, areas and assign it this location. 
*/

