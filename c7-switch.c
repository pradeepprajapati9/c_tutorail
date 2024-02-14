#include <stdio.h>

int main()
{

    // print week from switch statement

        printf("Enter your day in index");
        int day;
        scanf("%d", &day);

        switch (day)
        {
        case 1:
            printf("Today is Sunday");
            break;
        case 2:
            printf("Today is Monday");
            break;
        case 3:
            printf("Today is Tuesday");
            break;
            ;
        case 4:
            printf("Today is Wednesday");
        case 5:
            printf("Today is Thursday");
            break;
        case 6:
            printf("Today is Friday");
            break;
        case 7:
            printf("Today is Saturday");
        default:
            printf("valid only 1-7");
        }

    

    // make a calculator
    printf("Enter operator * / + - ");
    char ope;
    scanf("%c", &ope);

    printf("Enter your first Value");
    int a;
    scanf("%d", &a);
    printf("Enter your second value");
    int b;
    scanf("%d", &b);

    int result;

    switch (ope)
    {
    case '+':
        result = a + b;
        printf("Here is Addition=> %d", result);
        break;
    case '-':
        result = a - b;
        printf("Here is Subtract=> %d", result);
        break;
    case '*':
        result = a * b;
        printf("Here is Multiplication=> %d", result);
        break;
    case '/':
        result = a / b;
        printf("Here is Devision=> %d", result);
        break;
    default:
        printf("valid operators");
    }
}