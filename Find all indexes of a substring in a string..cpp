//Find all indexes of a substring in a string.
//4.Write a program to find index the first occurrence of a substring in string.
#include<stdio.h>
int find(char s1[], char s2[])
{
	int s1len=0;
	int s2len=0;
	int i,j;
	while(s1[s1len]!='\0')
	{ s1len++;}
	while(s2[s2len]!='\0')
	{ s2len++;}
	
	for( i=0;i<=s1len-s2len;i++)
	{
		for( j=0;j<s2len;j++)
		{
			if(s1[i+j]!=s2[j])
			break;
		}
		if( j==s2len)
		printf("all index of substrings are %d\n",i);
	}
	
}
int main()
{
	printf("enter string:");
	char str1[20]; 
	gets(str1);
	printf("enter substring:");
	char str2[20]; 
	gets(str2);
	find(str1 , str2);
	return 0;
}
