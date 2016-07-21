#include <stdio.h>
// Type Conversion
// Type Casting
// Type Coercion


/*
The word coercion is used to denote an implicit conversion, either during compilation or during run time.
Implicit conversion happens in languages with "weak type".
Explicit type conversions can either be performed via built-in routines (or a special syntax) or via separately defined conversion routines such as an overloaded object constructor.
Explicit conversion happens in languages with "strong type".
*/

// Belows are an example of Type Coercion

//// Type Conversion

void convert1(double d, int i){
    if (d > i)   d = i;     // this make d has value of i, but the type is still double
    printf("Value is %f\n", d);
    printf("Size is %lu\n", sizeof(d));
}

// This demonstrates the data loss
void convert2(double d, int i){
    if (i < d)   i = d;
    printf("Value is %d\n", i);
}

/* Although d, l and i belong to different data types, they will be automatically converted to equal data types each time a comparison or assignment is executed.
    float to int causes truncation, i.e., removal of the fractional part.
    double to float causes rounding of digit.
    long long to int causes dropping of excess higher order bits.
*/
///// Type Promotion

#include <stdint.h>
/*
The typedef name int N _t designates a signed integer type with width N, no padding bits, and a two's-complement representation.
    Thus, int8_t denotes a signed integer type with a width of exactly 8 bits.
The typedef name uint N _t designates an unsigned integer type with width N.
    Thus, uint24_t denotes an unsigned integer type with a width of exactly 24 bits.
*/
int Promt()
{
    uint32_t a = 413;
    uint32_t b = 948;

    uint32_t x = 4294967295;
    printf("%u\n", x);

    fprintf(stdout, "%u\n", (a - b));           // This will show a "32bits" unsigned value
    fprintf(stdout, "%u\n", ((uint16_t) (a - b)));  // This is forced to show a "16bits" unsigned value

    return 0;
}
/*  When operating, the Computer promote 16bits into 32bits for one sepecified "%u".
    PS. My Computer is 64bits, When operating signed Int, value x:  -2^31< x < 2^31. But to use 64 bits unsigned. %llu is needed.
*/
// For Signed and unsigned integers
// 1 When a value with integer type is converted to another integer type other than _Bool, if the value can be represented by the new type, it is unchanged.
// 2 Otherwise, if the new type is unsigned, the value is converted by repeatedly adding or subtracting one more than the maximum value that can be represented in the new type until the value is in the range of the new type.
// 3 Otherwise, the new type is signed and the value cannot be represented in it; either the result is implementation-defined or an implementation-defined signal is raised.


////// Type Casting
void cast(){
    int a = 10;
    printf("%f\n", ((double) a));
}

//----------------
int main(){
    double  d = 3;
    int     i = 2;

    convert1(d, i);

    printf("-------\n");

    i = 2;
    d = 3.2227;

    convert2(i, d);

    printf("-------\n");

    Promt();

    printf("-------\n");

    cast();


}

/*
PS. For Haskell(strong type), when giving "5 + 0.1", the compiler first view 5 as float. If for a weak type language, it may first view 5 as Int, than convert it to Float.
*/