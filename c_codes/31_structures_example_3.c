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
    struct books book[10];
    int i;

    printf("Enter Book info\n");

    for(i=0; i<10; i++)
    {
        scanf("%s %s %s %d",
              book[i].title,
              book[i].author,
              book[i].subject,
              &book[i].book_id);
    }

    printf("Printing Books Information\n");
    for(i=0; i<10; i++)
    {
        printf("%s %s %s %d\n",
              book[i].title,
              book[i].author,
              book[i].subject,
              book[i].book_id);
    }

    return 0;
}
