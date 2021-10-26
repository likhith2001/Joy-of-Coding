/*
 2. Write a  menu based program to implement dynamic stack,
 a stack that never gets filled( until stack segment is full)
 Implmenet functinos to add, delete and display the content of the stack

 Hint: start with intial capacity 1/2
        use  malloc, realloc
*/
#include<stdio.h>
#include<stdlib.h>

int display(int *s, int top, int  n)
    {
      int i;
       if ( top == -1)
          {
              printf("Stack underflow\n");
              return 0;
          }
      for(i=top; i >=0; i--)
        printf("%d\n", i[s]);
    }

int pop (int *s, int *top)
    {
      if ( (*top) == -1)
      {
          printf("Stack underflow\n");
          return 0;
      }
      printf("Popped element is %d",s[(*top)]);
      (*top)--;
    }
int * push(int *s, int *top, int *n)
    {
        int ele;
        if(  (*top)==(*n)-1)
        {
           printf("stack overflow...stack size is being incremented\n");
           (*n) = (*n) * 2;
           s  = (int *) realloc(s, sizeof(int) * (*n));
         }
          (*top)++;
          printf("enter the element\n");
          scanf("%d",&ele);
          s[*top]=ele;
         return s;
    }
int main( )
    {
       int n,*a,top=-1,ch;
      printf("Initial size of stack\n");
      scanf("%d",&n); // n=2;
      a = (int *) malloc(sizeof(int)*n);
      for(;;)
      {
        printf("\nDYNAMIC STACK\n");
              printf("1. Push\n2. Pop\n3. Display\n4. Exit\nEnter choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
           case 1: push(a, &top, &n);
                  break;
           case 2: pop(a, &top);
                  break;
           case 3: display(a, top, n);
                  break;
           default: return 0;
            }
     }
}0
