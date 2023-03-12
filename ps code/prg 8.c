//palindrome//
#include<stdio.h>
#include<string.h>
void main()
{
char str1[20];
int len,i,flag=0;
printf("enter a string:\n");
scanf("%s",str1);
len=strlen(str1);
for(i=0;i<len;i++)
{
if(str1[i]=str1[len-i-1])
{
flag=1;
break;
}
}
if(flag==0)
printf("\n given string is palindrome",str1);
else
printf("\n given string is not palindrome",str1);
}
