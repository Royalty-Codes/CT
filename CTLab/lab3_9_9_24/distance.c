#include<stdio.h>
int main()
{
float d,fuelcostperliter,time,avgspeed,milage,totalfuelcost;
printf("enter distance between delhi to mumbai");
scanf("%f",&d);
printf("enter fuel cost per liter&milage");
scanf("%f%f",&fuelcostperliter,&milage);
printf("enter average speed of travell");
scanf("%f",avgspeed);
totalfuelcost=(fuelcostperliter*d)/milage;
time=avgspeed/distance;
printf("total fuel cost=%f\ntime=%f",totalfuelcost,time);

