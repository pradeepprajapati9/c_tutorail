#include <stdio.h>
int main()
{

    FILE *create;

    // Open a file in append mode
    create = fopen("filcreate.txt", "a");

    // Append some text to the file
    fprintf(create, "\na database is large amount of data");
    
    // close the file
    fclose(create);

    return 0;
}