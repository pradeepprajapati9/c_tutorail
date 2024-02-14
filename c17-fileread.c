#include <stdio.h>
int main()
{
    FILE *create;

    //  read file data
    create = fopen("filcreate.txt", "r");

    // Store the content of the file
    char store[255];

    // Read the content and store it inside myString
    fgets(store, 255, create);

    // Print the file content
    printf("%s", store);

    return 0;
}