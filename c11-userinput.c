#include <stdio.h>

int main()
{

    //   single input
    printf("enter your value");
    int a;
    scanf("%d", &a);
    printf("enter your value");
    int b;
    scanf("%d", &b);
    int c = a + b;

    printf("your sum value=> %d\n", c);

    // how to get multiple user input

    printf("enter value\n");
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    printf("sum value=%d",x+y+z);

     

    return 0;
}