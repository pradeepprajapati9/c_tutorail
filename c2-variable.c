#include <stdio.h>

int main()
{

    // a variable is container which is store and hold the value
    // type variableName = value;
    // int = "%d" float = "%f" char = '%c'

    int age = 20;
    char grade = 'B';
    float temperature = 52.6;
    double pi = 3.14159265359;

    // how to print in c
    int number = 9563;
    printf("this is only integer value %d\n", number);

    float dec = 95.8;
    printf("this is float value %f\n", dec);

    char Name = 'p';
    printf("this is charactor value print %c\n", Name);

    // if your want to change the variable value return 0;
    int lap_price = 5200;
    lap_price = 1000;
    printf("%d\n", lap_price);

    // if you want create a multiple value
    int x = 10, y = 20, z = 30;
    printf("print multiple value %d\n", x + y + z);

    return 0;
}
