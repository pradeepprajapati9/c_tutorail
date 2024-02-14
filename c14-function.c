#include <stdio.h>
#include <string.h>
// normal funciton
void Add_fun()
{
    printf("this is normal function called\n");
}

// parameter function
int sumfunction(int a, int b)
{
    int c = a + b;
    printf("your add value=>%d\n", c);
}

// pass multiple array in funciton
void pass_multi(char n[], int num)
{
    printf("pass multiple array in funciton=>%s %d\n", n, num);
}

// function in return here is somthing value return ther we use int in function
int multiplecation(int a, int b)
{
    return a * b;
}

int main()
{
    // a function is block of code which is run only when called
    // there are two type of function
    // 1.predefine 2.userdefine
    Add_fun();
    sumfunction(10, 20);
    pass_multi("Your age is", 25);
    printf("multiplecation return function %d",multiplecation(20, 20));
    return 0;
}