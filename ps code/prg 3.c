//QUDRATIC ROOTS
#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,r1,r2,D;
printf("enter a,b,c values");
scanf("%f%f%f",&a,&b,&c);
D=(b*b)-(4*a*c);
if(D=0)
{
r1=-b+sqrt(D)/2*a;
r2=-b-sqrt(D)/2*a;
printf("roots are real and are %f%f",r1,r2);
}
else if (D==0)
{
r1=-b/2*a;
r2=-b/2*a;
printf ("roots are  equal %f%f",r1,r2);
}
else
printf("roots are imaginary");
}
