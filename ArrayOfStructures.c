/*
2. Write a program to do the following (Use  array of structures)
    a. Create a book database (title, author, price, no_pages)
    b. Update the book price based on the title.
    c. Display appropriate message if updation fails.
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct book
{
    char book_title[20];
    char author[10];
    float price;
    int no_pages;
};
typedef struct book B;
void read_book(B a[],int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%s%s%f%d",a[i].book_title,a[i].author,&(a[i].price),&(a[i].no_pages));
    }
}
void diplay(B a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%s %s %f %d\n",a[i].book_title,a[i].author,(a[i].price),a[i].no_pages);
    }
}
void search(B a[],int n,char key[])
{
    int price;
    for(int i=0;i<n;i++)
    {
        if(strcmp(a[i].book_title,key)==0)
        {
            printf("Search Sucessful !\n");
            printf("Enter the new price\n");
            scanf("%d",&price);
            a[i].price=price;
            return;
        }
        else
            printf("Search Unsucessful !\n"); break;
    }
}
int main()
{
    B a[10];
    int n,ch;
    char key[10];
    printf("Enter the number of books\n");
    scanf("%d",&n);
    printf("Enter the values as Book Title,Author,Price,No of pages\n");
    read_book(a,n);
    while(1)
    {
        printf("Enter the choices\n1.Read\n2.Display\n3.Search\n4.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:read_book(a,n+1);
                break;
            case 2:diplay(a,n);
                break;
            case 3:printf("Enter the title to search\n");
                scanf("%s",key);
                search(a,n,key);
                break;
            case 4:exit(0);
            default:printf("Enter a valid choice\n");
        }
    }
}
