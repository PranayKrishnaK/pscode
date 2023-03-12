//position of string//
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str1[30],t[20];
char*found;
clrscr();
puts("enter the first string : \n");
gets(s);
puts("enter the string to be searched:");
gets(t);
found=strstr(s,t);
if (found)
{
printf("second string is found in the first string at %d position:\n");
}
else
{
printf("-1");
}
getch();
}
