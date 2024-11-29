#include<stdio.h>
int main()
{
float p1,p2,p3,p4,p5,total;
printf("enter the price of 5 items");
scanf("%f%f%f%f%f",&p1,&p2,&p3,&p4,&p4,&p5);
printf("price of each item is\n");
printf("price1=%f\nprice2=%f\nprice3=%f\nprice4=%f\nprice5=%f",p1,p2,p3,p4,p5);
total=p1+p2+p3+p4+p5;
printf("total bill=%f",total);
}
