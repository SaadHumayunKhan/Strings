#include<stdio.h>
/****************************/
int find_len(char a[])
{
	int i=0;
	while(a[i]!='\0')
	{  i++;  }
	return i;	
}
/****************************/
reverse(char a[], int l)
{
	int s=0;
	int e=l-1;
	while(s<e)
	{
		char c=a[s];
		a[s]=a[e];
		a[e]=c;
		s++;
		e--;
	}
}
/****************************/
int main()
{
	printf("enter name:");
	char name[20];
	gets(name);
	int len=find_len(name);
	printf("length of name is %d",len);
	reverse(name,len);
	printf("\nReversed name: %s", name);	
}
