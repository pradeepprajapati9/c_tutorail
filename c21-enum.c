#include <stdio.h>

//ENUM: It is a user-defined data type that consists of integer values, and it provides meaningful names to these values.

// why use
// Use enums when you have values that you know aren't going to change, like month days, days, colors, deck of cards, etc.

enum creatvar
{
    a = 52,
    b = 50,
    c = 36
};

int main()
{
    printf("%d", a);
    return 0;
}
