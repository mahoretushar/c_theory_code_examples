/* Structure Example for Books */
#include<stdio.h>
#include<string.h>

struct books
{
    char title[50];
    char author[50];
    char subject[50];
    int book_id;
};

int main()
{
    struct books book1; // declare book1 of type books
    struct books book2; // declare book2 of type books

    /* book1 specification */
    strcpy(book1.title, "C codes");
    strcpy(book1.author, "Batman");
    strcpy(book1.subject, "Computer Programming");
    book1.book_id = 0001;

    /* book2 specification */
    strcpy(book2.title, "python codes");
    strcpy(book2.author, "Superman");
    strcpy(book2.subject, "Python Practicals");
    book2.book_id = 0002;

    /* print book1 information */
    printf("Book 1 Title: %s\n",book1.title);
    printf("Book 1 Author: %s\n",book1.author);
    printf("Book 1 Subject: %s\n",book1.subject);
    printf("Book 1 ID: %d\n",book1.book_id);

    /* print book2 information */
    printf("Book 2 Title: %s\n",book2.title);
    printf("Book 2 Author: %s\n",book2.author);
    printf("Book 2 Subject: %s\n",book2.subject);
    printf("Book 2 ID: %d\n",book2.book_id);

    return 0;
}
