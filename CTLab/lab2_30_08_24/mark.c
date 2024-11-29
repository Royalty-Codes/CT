#include<stdio.h>
int main()
{
float e,m,p,c,i,avg;
printf("Enter Eng Marks: ");
scanf("%f",&e);
printf("Enter Phy Marks: ");
scanf("%f",&p);
printf("Enter Chem Marks: ");
scanf("%f",&c);
printf("Enter Math Marks: ");
scanf("%f",&m);
printf("Enter Comp Marks: ");
scanf("%f",&i);
avg=(e+m+p+c+i)/5;
printf("Percentage: %f\n",avg);
return 0;
} 
