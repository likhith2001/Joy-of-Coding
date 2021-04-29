/*
1. Write a program that declares and initializes a structure variable.
print the values of that structure variable
Consider :: the use case of a book stall and following details
book_id, book_title, author, price
*/

#include<stdio.h>

typedef struct{
    int book_id;
    char book_title[50], author[20];
    float price;
}st;

int main(){
    st book;
    printf("Enter book_id, book_title, author, price\n");
    scanf("%d%f", &book.book_id, &book.price);
    gets(book.book_title); gets(book.author);
    scanf("%f", &book.price);
    printf("%d\t%s\t%s\t%f\n", book.book_id, book.book_title, book.author, book.price);
    return 0;
}
