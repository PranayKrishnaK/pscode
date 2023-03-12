// Xn//
#include<stdio.h>
void main()
{
int sum=1,x,n,i;
printf("enter value of x,n");
scanf("%d%d",&x,&n);
for(i=1;i<=n;i++)
{
sum=sum*x;
}
printf("%d",sum);
}
