// Creation of the new file
// Opening an existing file
// Reading from the file
// Writing to the file
// Deleting the file

// w - Writes to a file
// a - Appends new data to a file
// r - Reads from a file

#include <stdio.h>
#include <string.h>
int main()
{

    // create a new file
    FILE *create;
    create = fopen("filcreate.txt", "w");

    // write some data in file
    fprintf(create, "this is my name");

    // close the file
    fclose(create);

    // return 0;
}