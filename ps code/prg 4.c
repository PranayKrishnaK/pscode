//1
//1 2
//1 2 3
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
printf("enter a number to define n:\n");
scanf("%d",&n);
printf("  \n  ");
for(i=1;i<=n;++i)
{
for(j=1;j<=i;++j)
{
printf("%d",j);
}
printf("  \n  ");
}
}
