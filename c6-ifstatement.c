#include <stdio.h>

int main()
{
    // how to take value from user

    printf("Enter your age values");
    int age;
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("you are elible for vote");
    }
    else
    {
        printf("you are not elible for vote");
    }

    //  print the result
    printf("Enter your marks");
    int m;
    scanf("%d", &m);

    if (m > 80 && m <= 100)
    {
        printf("grade A");
    }
    else if (m > 60 && m <= 80)
    {
        printf("grade B");
    }
    else if (m > 30 && m <= 60)
    {
        printf("grade C");
    }
    else if (m >= 0 && m <= 30)
    {
        printf("faild");
    }
    else
    {
        printf("please valid input");
    }

    return 0;
}