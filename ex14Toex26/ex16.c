#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

/*
Malloc: Defined in stdlib.h, are used for dynamic memory allocation.
The malloc is used to allocate a block of memory on the heap(a free store).
    The program accesses this block of memory via a pointer that malloc returns.
    When the memory is no longer needed, the pointer is passed to free
    which deallocates the memory so that it can be used for other purposes.

Comparing with static and automatic memory operation:
1. The allocation size is non-constant.
2. The lifetime has greater flexibility.
Its brother functions: realloc, calloc and free.
*/

struct Person {
    char *name;
    int age;
    int height;
    int weight;
};

// Now "struct Person" is a data type.
// So you can create something that belong to this data type like the *who below:
struct Person *Person_create(char *name, int age, int height, int weight)
{
    struct Person *who = malloc(sizeof(struct Person));
    assert(who != NULL);    /* use assert to make sure that I have a valid piece of memory back from malloc
                                and basically checking that malloc didn't return a NULL invalid pointer.
                                The assert is used for debugging those unexpected conditions. It means "I am sure that this condition is true"
                                If there may appears expected bugs, one should instead using If-else statement.*/
                            // One use "NULL" to mean "unset or invalid pointer".
    who->name = strdup(name);   /* Strdup duplicate the string for the name, just to make sure that this structure actually owns it.
                                    It's similar to malloc and it also copies the original string into the memory it creates.*/
    who->age = age;
    who->height = height;
    who->weight = weight;

    return who;
}

void Person_destroy(struct Person *who)
{
    assert(who != NULL);

    free(who->name);        // This is to free the memory which created by stydup
    free(who);
}

void Person_print(struct Person *who)
{
    printf("Name: %s\n", who->name);
    printf("\tAge: %d\n", who->age);
    printf("\tHeight: %d\n", who->height);
    printf("\tWeight: %d\n", who->weight);
}

int main(int argc, char *argv[])
{
    // make two people structures
    struct Person *joe = Person_create(
            "Joe Alex", 32, 64, 140);

    struct Person *frank = Person_create(
            "Frank Blank", 20, 72, 180);

    // print them out and where they are in memory
    printf("Joe is at memory location %p:\n", joe);
    Person_print(joe);

    printf("Frank is at memory location %p:\n", frank);
    Person_print(frank);

    // make everyone age 20 years and print them again
    joe->age += 20;
    joe->height -= 2;
    joe->weight += 40;
    Person_print(joe);
    Person_print(frank);

    frank->age += 20;
    frank->weight += 20;

    // destroy them both so we clean up
    Person_destroy(joe);
    Person_destroy(frank);

    /* This run with valgrind shows:  Address 0x0 is not stack'd, malloc'd or (recently) free'd
            So the NULL seems to have address 0x0 */
    // Person_print(NULL);

    // This will let assert to catch a Bug
    // Person_destroy(NULL);

    return 0;
}


/*
- C dynamic memory allocation: https://en.wikipedia.org/wiki/C_dynamic_memory_allocation
- When to use Assert: http://stackoverflow.com/questions/1963626/how-to-use-a-c-assert-to-make-the-code-more-secure

*/