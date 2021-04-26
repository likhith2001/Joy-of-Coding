/*
2.  Write a program to accept and display string (Memory must be allocated dynamically)
   using functions

Sample i/o

Input : rnsit
Output: rnsit
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char * getString(char * str){
    char buffer[100];
    printf("Enter the String\n");
    scanf("%[^\n]", buffer);
    str = (char*)malloc(strlen(buffer)+1);
    strcpy(str,buffer);
    return str;
}

int main(){
    char *str;
    printf("The entered string is : %s", getString(str));
    return 0;
}
