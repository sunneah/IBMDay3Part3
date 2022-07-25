#include<stdio.h>
#include<string.h>

void main()
{
  char str[20]; 
  int l,k,i,f=0;
  printf("Enter a string:");
  gets(str);
  l=strlen(str);
  k=l-1;
  for(i=0;i<=l/2;i++)
  {
    if(str[i]!=str[k])
    { f=1;
     break;
    }
    k--;
  }
  
  if(f==0)
    printf("string is a palindrome");
  else
    printf("String is not a palindrome");
   
  
}
