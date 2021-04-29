#include <stdio.h>
struct book
{
    char title[10];
    char author[10];
    float price;
    int no_pages;
};

void read(struct book *);
void print(struct book *);

int main()
{
   struct book bk;
   struct book *sptr=&bk;
   read(sptr);
   print(sptr);
   return 0;
}

 void read(struct book *sptr)
{
     printf("Enter the title, author name, price and number of pages in order\n");
     scanf("%s%s%f%d", sptr->title, sptr->author, &(sptr->price), &(sptr->no_pages));
}

void print(struct book *sptr)
{
    printf("The book details are\n");
    printf("\n%s\t%s\t%f\t%d", sptr->title, sptr->author, sptr->price, sptr->no_pages);
}
