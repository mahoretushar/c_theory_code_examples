/* Program to demonstrate use of "if" statement */

#include <stdio.h>

int main(void) {
    char name;
    int weight, height;
    printf("Enter name, weight and height of student \n");
    scanf("%c %d %d",&name, &weight, &height);

    // "if" statement contains a condition which is going to get checked
    if(weight<=50 && height>=170)
    {
        printf("Congrats you are eligible\n");
    }

    printf("The code executed successfully\n");

    return 0;
}
