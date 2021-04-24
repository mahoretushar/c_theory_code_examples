/* Program to input students information */
#include <stdio.h>
int main() {

    // to read a string we must use character array
    char fname[10], mname[10], lname[10], branch[25], section[5];
    int dob,rollno;
    long int mono;

    // to read a string from terminal "%s" is used as format specifier
    printf("Enter your First Name, Middle Name, Last Name\n");
    scanf("%s %s %s", fname, mname, lname);

    printf("Enter Date of Birth and Mobile Number\n");

    // "%2d" only reads 2 numbers from terminal
    scanf("%2d %10ld", &dob, &mono);

    printf("Now just your Branch, Section and Roll No.\n");
    scanf("%s %s %d", branch, section, &rollno);

    printf("Your Name is: %s %s %s\n", fname, mname, lname);
    printf("DOB: %d, Mobile: %ld\n", dob, mono);
    printf("Section: %s, Branch: %s, Roll No:%d\n", section, branch, rollno);

    return 0;
}
