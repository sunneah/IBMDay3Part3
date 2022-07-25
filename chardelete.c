#include<stdio.h>
#include<string.h>
#include <conio.h>
char str[20];
void del(int i)
{
	int j;
	for(j=i;j<strlen(str)-1;j++)
	{
		str[j]=str[j+1];
	}
	str[j]='\0';
}
void main()
{
	char ch;
	int i;
	printf("Enter string: ");
	scanf("%s",str);
	printf("Enter char to be deleted:");
	scanf("%c",ch);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==ch)
		{
			del(i);
			i--;
		}
	}

	printf("%s\n",str);
}
