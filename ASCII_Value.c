/*
1. Write a program to return the ASCII value for a character
input : A  output: 65
input : a  output: 97
input :    output: 32   (Space)
*/
#include<stdio.h>

int main(){
    char a;
    printf("Enter a character\n");
    scanf("%c", &a);
    printf("ASCII value of %c is %d", a, a);
    return 0;
}
