#include<stdio.h>
#include<math.h>
void main()
{
float p,t,r,si,ci;
printf("enter p,t,r values:\n");
scanf("%f%f%f",&p,&t,&r);
si=(p*t*r/100);
ci=p*pow(1+r/100,t);
printf("si=%f \n",si);
printf("ci=%f \n",ci);
}
