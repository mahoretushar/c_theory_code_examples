/* Program to find even and odd number using "if" statement */

#include <stdio.h>

int main() {

    int number, chk_no;
    printf("Enter an Integer Number\n");
    scanf("%d",&number);

    // following statement will find the reminder
    chk_no = number % 2;

    // if the reminder is "0" given no. is even, that's what the following statement is showing
    if(chk_no == 0)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }

    return 0;
}
