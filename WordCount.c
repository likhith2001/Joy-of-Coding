/*
3. Write a program that returns the word count in a given sentence
   ASCII for space is 32
 input:every example is unique in its way
 output : 7
*/
#include <string.h>
#include<stdio.h>
int main()
{
    char s[1000];
    int i,words=0;

    printf("Enter the string : ");
    scanf("%[^\n]", s);

    for(i=0;s[i];i++)
    {
    	if(s[i]==32)
            words++;

 	}
 	if(i>0)
        words++;

    printf("No of words in string = %d\n",words);

    return 0;
}
