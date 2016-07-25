#ifndef _object_h
// #include <stddef.h>
// This is read by cpp, to prevent one from repeating defining "_object_h"
// when cpp read this, it will
    // check whether any file(both the one include this file or this file itslef) has the "#define _object_h" or not.
    // And if there is, it skips the code between "#ifndef" to "#endif".

#define _object_h
// Since cpp has found there isn't a definition for "_object_h", we, of course, need to define one.

typedef enum {
    NORTH, SOUTH, EAST, WEST
} Direction;

typedef struct {
    char *description;
    int (*init)(void *self);
    void (*describe)(void *self);
    void (*destroy)(void *self);
    void *(*move)(void *self, Direction direction);
    int (*attack)(void *self, int damage);
} Object;
// In this way there's no need to give a struct name
    // original one:
        // struct Object (...);  and the type is "struct Object"


int Object_init(void *self);
void Object_destroy(void *self);
void Object_describe(void *self);
void *Object_move(void *self, Direction direction);
int Object_attack(void *self, int damage);
void *Object_new(size_t size, Object proto, char *description);

// This Line Define a Macro, wihch will spit out the code on the right
    // whenever you write use the macro on the left.
//      <identifier>     <replacement token list>
#define NEW(T, N)       Object_new(sizeof(T), T##Proto, N)
//         (<parameters>)
// "T##Proto" says to "concat Proto at the end of T",
    // ex: NEW("Hey", N) -> HeyProto
// A macro definition can be removed with #undef:
    // ie: #undef NEW

#define _(N) proto.N
// This Syntex give one a tricky way to write
    // obj->proto.blah as simply obj->_(blah)

#endif


/*
// Macro
A macro is a rule or pattern that specifies
    how a certain input sequence (often a sequence of characters) should be mapped to a replacement output sequence (also often a sequence of characters)
    according to a defined procedure.
Two types of Macro:
    1. object-like (no parameters)
        #define <identifier> <replacement token list>
    2. function-like (with parameters)
        #define <identifier>(<parameter list>) <replacement token list>

*/







// reference: https://en.wikipedia.org/wiki/C_preprocessor












//