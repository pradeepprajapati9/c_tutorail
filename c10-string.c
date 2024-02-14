#include <stdio.h>
#include <string.h>
int main()
{
    // if you want to pring the string in c
    char Print_para[] = "A database is a large amount of data\n";
    printf("%s", Print_para);

    // how to access string;
    char str[] = "karan";
    printf("access string=%c\n", str[0]);

    // modify in stirng
    str[2] = 'p';
    printf("update string=%c", str[2]);

    //  how to aceess string from loop
    char carName[] = "Volvo";
    int i;
    for (i = 0; i < 5; ++i)
    {
        printf("%c\n", carName[i]);
    }

    // how to get length of string
    char p_name[] = "adatabaseisalargeamountofdata";
    printf("how to get length=%ld\n", strlen(p_name));

    // how to concatenate of string
    char str1[20] = "pradeep";
    char str2[] = "prajapati";
    strcat(str1, str2);
    printf("concate=%s\n", str1);

    // how to copy of string
    strcpy(str1, str2);
    printf("copy=%s\n", str1);

    // how to compare of string
    char str3[] = "Hello";
    char str4[] = "Hi";
    printf("%d\n", strcmp(str3, str4));

    return 0;
}