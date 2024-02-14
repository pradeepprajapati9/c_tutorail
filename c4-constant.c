#include <stdio.h>

int main()
{
    //constant variable : a constant variable which is not change the value.

    const int ph_no = 995318;

    ph_no=100; //error: assignment of read-only variable ‘ph_no
    
    printf("%d", ph_no);

    return 0;
}