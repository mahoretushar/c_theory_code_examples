/* Program to demonstrate the use of Structure
 * Define structure type, "struct personal"  that would contain
 * name, date of joining and salary. */
#include<stdio.h>
struct personal
{
    char name[25];
    int day;
    char month[10];
    int year;
    float salary;
};

int main()
{
    struct personal person_1;
    printf("Enter required information\n");

    scanf("%s %d %s %d %f",
          person_1.name,
          &person_1.day,
          person_1.month,
          &person_1.year,
          &person_1.salary);

    printf("Printing out the Information of person 1\n");
    printf("%s %d %s %d %f\n",
           person_1.name,
           person_1.day,
           person_1.month,
           person_1.year,
           person_1.salary);
    return 0;
}

/* person_1 = {name, day, month, year, salary}
 * person_2 = {name, day, month, year, salary} */
