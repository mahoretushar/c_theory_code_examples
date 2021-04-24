/* Program to demonstrate use of "ifelse ladder"
 * Following program will calculate the Grade of Student
 * Based on input Marks */

#include <stdio.h>
int main() {
    int mark;
    char name[20];

    printf("Enter Students Name and Marks\n");
    scanf("%s %d",name,&mark);

    printf("Hi %s \nYour Grade is: ",name);

    // ifelse ladder with multiple conditions
    if(mark >= 75)
    {
        printf("Distinction\n");
    }
    else if(mark >= 60)
    {
        printf("First Division\n");
    }
    else if(mark >= 50)
    {
        printf("Second Division\n");
    }
    else if(mark >= 35)
    {
        printf("Third Division\n");
    }
    else
    {
        printf("Fail\n");
    }

    return 0;
}
