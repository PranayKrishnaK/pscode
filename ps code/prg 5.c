// 1
//2 2
//3 3 3
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,rows;
printf("enter a number to define rows:\n");
scanf("%d",&rows);
printf("\n");
for(i=1;i<=rows;++i)
{
for(j=1;j<=i;++j)
{
printf("%d",i);
}
printf("\n");
}
}
