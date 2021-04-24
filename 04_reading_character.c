/* Reading a character using "getchar()" function */
/* Writing a character using "putchar()" function */

#include <stdio.h>
int main() {

    // character variable decleration
    char name;

    // message for user
    printf("Enter your Name: ");

    // reading a character from terminal
    // the following line will read only one character
    name = getchar();

    // writing a character on terminal
    putchar(name);
    printf("\n");

    return 0;
}
