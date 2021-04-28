/*
4.  Number game  :: Input an element ( string, number etc) and if the input is a number
then accept, if the input is "done" then stop  accepting,
otherwise accept the next element and so on.
Use the element "done" to stop accepting input and return the largest
 and smallest element received

Sample input pattern    111 345 hello  356 678 111 999 bye 165 done
output: the smallest is 111 the largest is 999

Hint Explore the usage of atoi function
don use integer array !!!!!!
*/

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int f,k,max,min,i;
    char str[10];
    while(1)
    {
        printf("Enter string\n");
        scanf("%s",str);
        f=atoi(str);
        k=strcmp(str,"done");
        if(k==0)
        {
            printf("Max ele is %d\n",max);
            printf("Min ele is %d\n",min);
            exit(0);
        }
        if(f==0)
            continue;
        else
        {
            if(f>max)
                max=f;
            if(f<min)
                min=f;
            continue;
        }
    }
}
