/*
1. Write a program to accept and display string (Memory must be allocated dynamically)
   with out using functions

Sample i/o

Input : rnsit
Output: rnsit
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char buffer[100], *str;
    printf("Enter the String\n");
    scanf("%[^\n]", buffer);
    str = (char*)malloc(strlen(buffer)+1);
    strcpy(str,buffer);
    printf("The entered string is : %s", str);
    return 0;
}
