#include <stdio.h>

int main()
{
    int age = 10;
    int height = 72;
    double times = 10;
    int babies = 2;
    // int peaple;             // If one don't assign value to it, the program will autpmatically assigns 0 to silence the warning.

    printf("I am %d years old.\n");
    printf("I am %d inches tall.\n", height);
    printf("I'd like to %% %% %% %a times.\n", times);    // Notice that the "%"s "escape" successfully
    // printf("There are %d peaple on the street.\n", peaple);
    printf(" \"Hahaha\" Time to eat %d babies.\n", babies);

    return 0;
}



// Run man 3 printf and read about the other '%' format characters you can use.