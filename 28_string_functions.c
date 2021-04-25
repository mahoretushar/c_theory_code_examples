/* Program for various string functions */
#include<stdio.h>
#include<string.h> // for string functions

int main() {

    // strcat(): merge two strings
    char f_name_1[100] = "Bruce ";
    char l_name[100] = "Wayen";
    printf("Before strcat() f_name_1 = %s\n", f_name_1);
    strcat(f_name_1,l_name);
    printf("After strcat() f_name_1 = %s\n", f_name_1);

    // strcpy(): copy value from one string to another
    char f_name_2[100] = "Batman ";
    printf("\nBefore strcpy() f_name_1 = %s\n",f_name_1);
    printf("Value of f_name_2 = %s\n",f_name_2);
    printf("Copying f_name_2 to f_name_1\n");
    strcpy(f_name_1, f_name_2);
    printf("After strcpy() f_name_1 = %s\n",f_name_1);

    // strcmp(): compare two strings
    char var_1[10] = "ram"; // ram = a
    char var_2[10] = "rom"; // rom = o
    char a = 'a', o = 'o';
    printf("\na = %d, o = %d\n",a,o);
    int x = strcmp(var_1,var_2); // compare two strings
    printf("strcmp() result = %d\n",x);

    // strlen(): find length of string
    char var_3[100] = "C Programming is Cool";
    int n = strlen(var_3);
    printf("\nLength of var_3 is: %d\n",n);

    return 0;
}
