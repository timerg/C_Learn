/*
https://www.cs.bu.edu/teaching/c/stack/array/
stack: a common data structure
Stacks hold objects, usually all of the same type.
 the main property of a stack is that objects go on and come off of the "top" of the stack.
 (if one want ro take element "in" the stacks, he must take off those on tops first)

* the minimal operations we'd need for an abstract stack
- Push: Places an object on the top of the stack.
- Pop: Removes an object from the top of the stack and produces that object.
- IsEmpty: Reports whether the stack is empty or not.

Thus, we say that a stack enforces "LIFO" order.

*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    struct stack {
       int s[5];
       int top;
    };
}
