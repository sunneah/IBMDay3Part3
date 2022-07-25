#include<stdio.h>
#include<string.h>

void main()
{
	char str[20],c;
	int i,count=0;
	printf("Enter string:");
	scanf("%s",str);
	printf("Enter char:");
	scanf("%c",&c);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==c)
			{
				count+=1;
			}
	}
	printf("Count=%d\n",count);
}
