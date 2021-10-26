/*
2. Write a program that returns the max occurred character in the given line of input
   ASCII for space is 32

input : every example is unique
output: every example is unique
*/

#include <stdio.h>
#include <string.h>

int main()
{
  	char str[100], result;
  	int i, len;
  	int max = -1;

  	int freq[256] = {0};

  	printf("\n Please Enter any String :  ");
  	gets(str);

  	len = strlen(str);

  	for(i = 0; i < len; i++)
  	{
  		freq[str[i]]++;
	}

  	for(i = 0; i < len; i++)
  	{
		if(max < freq[str[i]])
		{
			max = freq[str[i]];
			result = str[i];
		}
	}
	printf("\n The Maximum Occurring Character in a Given String = %c ", result);

  	return 0;
}
