/*
1. Write a  menu based program to implement a simple stack (static),
 Implement functions to add, delete and display the content of the stack
*/
#include<stdio.h>
#define max 4
int push(int a[max],int*top,int elem)
{
	printf("Enter elem\n");
	scanf("%d",&elem);
	if(*top < max-1)
	{
		(*top)++;
		a[*top]=elem;
	}
	else
	    printf("STACK OVERFLOW\n");
}
int pop(int a[max],int *top)
{
	int elem;
	if(*top == -1)
	{
		printf("STACK UNDERFLOW\n");
	}
	else
	{
		elem=a[*top];
		(*top)--;
		printf("POPPED ELEM IS %d\n",elem);
	}
}
void display(int a[max],int top)
{
    int i;
    printf("Element of stack : \n");
    for(i=0;i<=top;i++)
        printf("%d\n",a[i]);
}
int main()
{
	int a[max],top=-1,ch,elem;
	while(1)
	{
		printf("----MENU----\n 1.PUSH\n 2.POP\n 3.DISPLAY\n 4.Exit\n---");
		printf("\nEnter Choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push(a,&top,elem);
			       break;
			case 2:pop(a,&top);
			       break;
	   	    case 3:display(a,top);
	   	           break;
            default:return 0;
		}
	}
}
