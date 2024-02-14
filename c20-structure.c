#include <stdio.h>
#include <string.h>

struct student
{
    int ph_no;
    int roll;
    char name[255];
} main()
{
    // a struct is a method where we can store multiple and diffrent type value

    // access the struct
    struct student s1;

    // store the value
    s1.ph_no = 995362;
    s1.roll = 5236;
    // s1.name = "pradeep"; give error bcz not change the value direct of array above
    strcpy(s1.name, "pradeep");

    // print the value
    printf("Student ph_number=>%d\n", s1.ph_no);
    printf("Student roll Number=> %d\n", s1.roll);
    printf("Student Name =>%s\n", s1.name);

    // create one time use more time like this

    struct student s2;
    s2.ph_no = 9956866;
    s2.roll = 25412;
    strcpy(s2.name, "karan");

    printf("Student ph_number=>%d\n", s2.ph_no);
    printf("Student roll Number=> %d\n", s2.roll);
    printf("Student Name =>%s\n", s2.name);

    struct student s3;
    s3.ph_no = 9956866;
    s3.roll = 25412;
    strcpy(s3.name, "kuldeep");

    printf("Student ph_number=>%d\n", s3.ph_no);
    printf("Student roll Number=> %d\n", s3.roll);
    printf("Student Name =>%s\n", s3.name);

    // store as a single line value
    struct student s4 = {995318, 5263, "arjun"};
    printf("Student Number %d\n", s4.ph_no);
    printf("Student Roll %d\n", s4.roll);
    printf("Student Name %s\n", s4.name);
}