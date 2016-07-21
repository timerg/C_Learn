// A practice using Valgrind
/* Warning: This program is wrong on purpose. */
#include <stdio.h>

int main()
{
    int age = 10;
    int height = 2;

    printf("I am %d years old.\n", age);
    printf("I am %d inches tall.\n", height);

    return 0;
}





/* An uninitialised-value use error is reported when your program uses a value which hasn't been initialised
-- in other words, is undefined.
 In this example, x is uninitialised.
 Memcheck observes the value being passed to _IO_printf and thence to _IO_vfprintf,
 but makes no comment.
 However, _IO_vfprintf has to examine the value of x so it can turn it into the corresponding ASCII string,
 and it is at this point that Memcheck complains.
*/




/* A correct one
==48750== Memcheck, a memory error detector
==48750== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==48750== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==48750== Command: ./ex4
==48750==
I am 10 years old.
I am 2 inches tall.
==48750==
==48750== HEAP SUMMARY:
==48750==     in use at exit: 26,376 bytes in 190 blocks
==48750==   total heap usage: 269 allocs, 79 frees, 32,504 bytes allocated
==48750==
==48750== LEAK SUMMARY:
==48750==    definitely lost: 0 bytes in 0 blocks
==48750==    indirectly lost: 0 bytes in 0 blocks
==48750==      possibly lost: 2,064 bytes in 1 blocks
==48750==    still reachable: 0 bytes in 0 blocks
==48750==         suppressed: 24,312 bytes in 189 blocks
==48750== Rerun with --leak-check=full to see details of leaked memory
==48750==
==48750== For counts of detected and suppressed errors, rerun with: -v
==48750== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
*/
/*A wrogn one (no age at the last of printf)
==48720== Memcheck, a memory error detector
==48720== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==48720== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==48720== Command: ./ex4
==48720==
I am 75508368 years old.
I am 2 inches tall.
==48720==
==48720== HEAP SUMMARY:
==48720==     in use at exit: 26,376 bytes in 190 blocks
==48720==   total heap usage: 269 allocs, 79 frees, 32,504 bytes allocated
==48720==
==48720== LEAK SUMMARY:
==48720==    definitely lost: 0 bytes in 0 blocks
==48720==    indirectly lost: 0 bytes in 0 blocks
==48720==      possibly lost: 2,064 bytes in 1 blocks
==48720==    still reachable: 0 bytes in 0 blocks
==48720==         suppressed: 24,312 bytes in 189 blocks
==48720== Rerun with --leak-check=full to see details of leaked memory
==48720==
==48720== For counts of detected and suppressed errors, rerun with: -v
==48720== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
*/
