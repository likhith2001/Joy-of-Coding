/*
2.	Write a program to check if two given String is the anagram of
	each other( string is saved in a structure)

struct str
{
    char cont[100];
};

An anagram is a word or phrase formed by rearranging the letters of a different word or phrase,
typically using all the original letters exactly once.
Example
Race =care
Eleven plus two = Twelve plus one
Note inbuilt functions strcmp,strlen & strcpy can be used.
*/

#include <stdio.h>

int find_anagram(char [], char []);
typedef struct str{
    char array1[20];
    char array2[20];
}st;
typedef struct node {
    st data;
}nd;
int main()
{
    nd *t;
    t = (nd *) malloc(sizeof(nd));
    int flag;

    printf("Enter the string\n");
    scanf("%s",(t->data).array1);
    printf("Enter another string\n");
    scanf("%s",(t->data).array2);
    int num1[26] = {0}, num2[26] = {0}, i = 0;

    while ((t->data).array1[i] != '\0')
    {
        num1[(t->data).array1[i] - 'a']++;
        i++;
    }
    i = 0;
    while ((t->data).array2[i] != '\0')
    {
        num2[(t->data).array2[i] -'a']++;
        i++;
    }
    for (i = 0; i < 26; i++)
    {
        if (num1[i] != num2[i])
            flag= 0;
    }
    flag=1;

    if (flag == 1)
        printf("%s and %s are anagrams.\n", (t->data).array1, (t->data).array2);
    else
        printf("%s and %s are not anagrams.\n", (t->data).array1, (t->data).array2);



}
