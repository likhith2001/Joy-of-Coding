/*
1. Program to save names in a SLL, names in the list must be saved in ascending order based on ASCII value
struct node
{
	char name[20];
	struct node *link;
}
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    char name[20];
    struct node *link;
};

typedef struct node *NODE;

NODE getnode()
{
    NODE x;
    x=(NODE)malloc(sizeof(struct node));
    return x;
}

NODE insert(NODE first)
{
    NODE temp;
    temp=getnode();
    temp->link=NULL;
    printf("Enter the element:");
    scanf("%s",temp->name);
    if(first==NULL)
    return temp;

    NODE cur,prev;
    cur=first;
    prev=NULL;
    if(strcmp(temp->name,cur->name)<0)
    {
        temp->link=cur;
        return temp;
    }

    while(cur!=NULL && (strcmp(temp->name,cur->name)>0) )
    {
        prev=cur;
        cur=cur->link;
    }


   prev->link=temp;
   temp->link=cur;
   return first;

}

void display(NODE first)
{
    NODE cur;
    cur=first;

    if(first==NULL)
    {
        printf("There are no elements to display");
        return ;
    }

    while(cur!=NULL)
    {
        printf("%s\n",cur->name);
        cur=cur->link;
    }
}

int main()
{
    int ch;
    NODE first=NULL;
    for(;;)
    {
        printf("\n---MENU---\n1.Insert\n2.Display\n3.Exit\nEnter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:first=insert(first);
            break;

           case 2:display(first);
            break;

            case 3:exit(0);
        }
    }
}
