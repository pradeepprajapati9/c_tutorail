#include <stdio.h>

int main()
{
    // when we are create a variable in our system then he created a address where we can access value and variable also

    //   a
    // |--------|
    // | 10     |create a address like this: 0x7ffef8f24474         |
    // -- -- -- --

    // &=it is address

    int a = 10;
    printf("%d", a); // access the value from  memory address
    // now he printed

    // now if you want to see the address of variable
    // for address print %p
    printf("adddress=>%p", &a); //0x7ffef8f24474

    return 0;
}