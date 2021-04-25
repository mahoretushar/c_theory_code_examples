/* Program to print month based on input number */
#include <stdio.h>
int main()
{
    int i;
    printf("Enter the month Value\n");
    scanf("%d",&i); // saving input value in 'i' //12

    switch(i) // i = 12
    {
        case 1:
            printf("January");
            break;
        case 2:
            printf("Feb");
            break;
        case 3:
            printf("March");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("June");
            break;
        case 7:
            printf("July");
            break;
        case 8:
            printf("August");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("October");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("December");
            break;
        default:
            printf("Incorrect Input");
            break;
    }
    printf("\n");
    return 0;
}
