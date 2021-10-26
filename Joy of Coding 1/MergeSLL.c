/*
3. write a program to merge two SLL and the result must be sorted

struct node
{
	int empid;
	struct node *link;
}
*/
#include <stdio.h>
#include <stdlib.h>

struct node
{
	int info;
	struct node *link;
};
typedef struct node *NODE;

NODE getnode()
{
	NODE p;
    p=(NODE)malloc(sizeof(struct node));
	if(p==NULL)
	{
		printf("Insufficient memory\n");
		exit(0);
	}
	return p;
}

NODE insert(NODE root,int item)
{
	NODE temp,last;
	temp=getnode();
	temp->info=item;
	temp->link= NULL;
    if(root==NULL)
	      return temp;
	last=root;
	while(last->link!=NULL)
	       last=last->link;
	last->link=temp;
	return root;
}

NODE concatenate(NODE root1, NODE root2)
{
	NODE last;
	if(root1==NULL && root2== NULL)
		return NULL;
	else if(root2==NULL)
		return root1;
	else if(root1==NULL)
		return root2;

	last=root1;
	while(last->link!=NULL)
	{
		last=last->link;
	}
	last->link=root2;
	return root1;
}

NODE display(NODE root)
{

	NODE temp;
	if(root==NULL)
	{
		printf("Linked List is empty\n");
		return root;
	}
	temp=root;
	while(temp!=NULL)
	{
		printf("%d\t",temp->info);
		temp=temp->link;
	}
	return root;
}

int main()
{
	NODE root1=NULL,root2=NULL;
	int item,choice;
	for(;;)
	{
		printf("\n---MENU---\n 1:Insert the first linked list\n 2:Insert the second linked list\n");
		printf(" 3:Concatenate\n 4:Display the first linked list\n ");
        printf("5:Display the second linked list\n 6:exit\n");
        printf("enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("Enter the item to be inserted in First Linked List\n");
				    scanf("%d",&item);
				    root1=insert(root1,item);
                    break;

			case 2: printf("Enter the item to be inserted in Second Linked List\n");
				    scanf("%d",&item);
				    root2=insert(root2,item);
                    break;

			case 3: root1=concatenate(root1,root2); break;

			case 4: display(root1);
				    break;

			case 5: display(root2);
				    break;

			case 6: exit(0);
		}
	}
}
