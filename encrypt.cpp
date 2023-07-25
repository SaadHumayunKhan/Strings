#include<stdio.h>
void encrypt(char str[], int value)
{
	int i=0;
	 while(str[i]!='\0')
	 {
	 	char ch=str[i];
	 	
	 	if(ch>='a'&&ch<='z')
	 	{
	 	ch=(ch-'a' + value)%26 + 'a';
		}
	 	else if(ch>='A'&&ch<='Z')
		{
	 	ch=(ch-'A' + value)%26 + 'A';
		}
	 	str[i]=ch;
	 	i++;
	 }
}
int main()
{
	printf("enter the message to encrypt:"); char str[100]; gets(str);
	printf("enter the shif value:"); int shift; scanf("%d",&shift);
	
	encrypt(str,shift);
	
	printf("Message after the encryption is %s:",str);
}
