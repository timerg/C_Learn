#include <stdio.h>

int main(int argc, char *argv[])
{
    // create two arrays we care about
    int ages[] = {23, 43, 12, 89, 2};
    char *names[] = {
        "Alan", "Frank",
        "Mary", "John", "Lisa"
    };

    // safely get the size of ages
    int count = sizeof(ages) / sizeof(int);
    int i = 0;

    // first way using indexing
    for(i = 0; i < count; i++) {
        printf("%s has %d years alive.\n",
                names[i], ages[i]);
    }

    printf("---\n");

    // setup the pointers to the start of the arrays
    int *cur_age = ages;
    char **cur_name = names;

    printf("The size of ages = %ld \n", sizeof(ages));
    printf("But the size of cur_age = %ld: See? You can't find the size of a pointer like this.\n"
        , sizeof(cur_age));

    // second way using pointers
    for(i = 0; i < count; i++) {
        printf("%s is %d years old.\n",
                *(cur_name+i), *(cur_age+i));       // you read it as "the value of (pointer cur_name plus i)".
    }

    printf("---\n");

    // third way, pointers are just arrays
    for(i = 0; i < count; i++) {
        printf("%s is %d years old again.\n",
                cur_name[i], cur_age[i]);
    }

    printf("---\n");

    // fourth way with pointers in a stupid complex way
    for(cur_name = names, cur_age = ages;
            (cur_age - ages) < count;
            cur_name++, cur_age++)
    {
        printf("%s lived %d years so far.\n",
                *cur_name, *cur_age);
    }
// Try to make cur_age point at names. You'll need to use a C cast to force it, so go look that up and try to figure it out.
    printf("---\n");

    int *cur_age2 = (int *)names;
// Try rewriting the loops so they start at the end of the arrays and go to the beginning. This is harder than it looks.

    printf("---\n");
    for(cur_name = names, cur_age = ages;
            (cur_age + count - ages) > 0;
            cur_name--, cur_age--)
    {
        printf("%s lived %d years so far.\n",
                *(cur_name + count - 1),(*(cur_age + count - 1)));
    }

// Extra Credit Not yet

    return 0;
}

/*
    "int* something" = "int *something",
        "int* something": the type of something is a pointer to int
        "int *something": the type of something pointed by a pointer is int
    Always remember that pointer points to a "address", not a array. It can point to the "head" of array.
*/

/*
C knows where pointers are pointing, knows the data type they point at,
the size of those types, and how to get the data for you.
The purpose of a pointer is to let you manually index into blocks or memory
when an array won't do it right.
*/

/*
Each memory are allocated with a number. This numbers terms "address"
The pointer points to "outer address"(global) of the Array, and the following [i] points to "inner address".

Conclusion :
 C thinks your whole computer is one massive array of bytes
 with itself layering on top of this massive array of bytes: the concept of types and sizes of those types.
 */