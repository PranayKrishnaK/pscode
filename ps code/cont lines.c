//count lines//
#include <stdio.h>
int main()
{
char str[100];
int words=0;
int newline=0,c=0;
printf("enter the any string:");
scanf("%s",&str);
for(int i=0;str[i]!='\0';i++)
{
if(str[i]=' ')
{
words++;
}
else if (str[i]=='\n')
{
newline++;
words++;
}
else if(str[i]!=' '&&str[i]!="\n");
{
c++;
}
}
if (c>0)
{
words++;
newline++;
}
printf("total number of words :%d \n",words);
printf("total number of lines:%d \n ",newline);
printf("total number of characters:%d \n",c);
return 0;
}
