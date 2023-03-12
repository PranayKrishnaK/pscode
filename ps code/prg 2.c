//prime numbers
#include<stdio.h>
void main()
{
int i,j,n,count=0;
printf("enter value of n:");
scanf("%d",&n);
printf("prime numbers between 1 and %d are,\n");
for(i=1;i<=n;i++)
{
count=0;
for(j=1;j<=n;j++)
{
if(i%j==0)
count++;
}
if(count==2)
printf("%d \t",i);
}
}
