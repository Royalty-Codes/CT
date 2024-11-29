#include<stdio.h>
int main()
{
int weeks=4,rate;
float h,salary;
printf("enter no of hours worked in a week\n");
scanf("%f",&h);
printf("enter rate per hour\n");
scanf("%d",&rate);
salary=weeks*rate*h;
printf("hours worked=%f\nrate per hour=%d\nno of weeks=4\n",h,rate);
printf("monthlypay=%f",salary);
}
