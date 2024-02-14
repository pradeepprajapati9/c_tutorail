#include <stdio.h>

int main()
{
    // a array is single variable which is store multiple values

    // how to create a array in c
    int munda_30[] = {10, 20, 50, 60, 80, 15, 42};
    printf("old value%d\n", munda_30[0]);

    // how to update value in array
    munda_30[0] = 22;
    printf("new value %d\n", munda_30[0]);

    // how to print all value with loop
    for (int i = 0; i <= 6; i++)
    {
        printf("all value %d\n", i);
    }

    // how to create fix value array;
    int sr[4] = {52, 44, 88, 33}; // not give more value bcz size is fix 4
    printf("%d", sr[4]);

    // how to get size of value int=4*your value
    // 4*4=16
    int delhib[] = {10, 50, 60, 52};
    printf("get sizeof%lu\n", sizeof(delhib));

    // how to get length in c
    int get_len[] = {10, 52, 85, 63};
    int length = sizeof(get_len) / sizeof(get_len[0]);
    printf("get length%d\n", length);

    // multidimensional array in c
    int matrix[2][3] = {{1, 4, 2}, {3, 6, 8}};

    printf("how to print %d\n", matrix[0][1]);

    // how to change the value
    matrix[0][3] = 10;
    printf("change value %d\n", matrix[0][3]);
    return 0;

//  how to print all value in multidimensional from loop
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("m=%d\n", matrix[i][j]);
        }
    }
}