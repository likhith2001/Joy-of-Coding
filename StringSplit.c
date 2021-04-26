/*
3. Write a program to split string in to words with out using inbuilt function

Sample i/o

Input : india is great
Output:
	india
	is
	great
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str[100];
    char splitStrings[20][20];
    int i, j=0, cnt=0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for(i=0;i<=(strlen(str));i++)
    {
        if(str[i]==' '||str[i]=='\0')
        {
            splitStrings[cnt][j]='\0';
            cnt++;
            j=0;
        }
        else
        {
            splitStrings[cnt][j]=str[i];
            j++;
        }
    }
    printf("\nWords in the String are:\n");
    for(i=0;i < cnt;i++)
        printf("%s\n",splitStrings[i]);
    return 0;
}
