#include <stdio.h>
int main()
{

    // what is pointer
    // a pointer variable whihc is store vlaue of another variable

    // 1.
    // how to create pointer in c  language
    int ph_num = 105;
    //  2. store address another variabble
    int *another_ph_num = &ph_num;
    // now its store the address of value then you can access the value

    // show the address of ph_num;
    printf("another_ph_num addres=>%p\n", another_ph_num);

    // now we can access the value of ph_num and store in another_ph_num
    printf("%d", *another_ph_num);

    // pointer & array
    int myNumbers[4] = {25, 50, 75, 100};
    int i;

    for (i = 0; i < 4; i++)
    {
        printf("%d\n", myNumbers[i]);
    }

    //    get the all value address
    int k;

    for (k = 0; k < 4; k++)
    {
        printf("%p\n", &myNumbers[k]);
    }


}