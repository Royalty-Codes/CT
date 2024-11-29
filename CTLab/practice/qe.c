#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
float d,x,y;
printf("Enter the coefficients of x^2, x and constant ");
scanf("%d%d%d",&a,&b,&c);
d=(b*b)-(4*a*c);
switch(d>0?1:(d==0?0:-1))
{
case 0:
x=-b/(2*a);
printf("Roots are real and equal = %.2f\n",x);
break;
case 1:
x=(-b + sqrt(d))/(2*a);
y=(-b - sqrt(d))/(2*a);
printf("Roots are real and unequal = %.2f %.2f\n",x,y);
break;
default:
printf("Roots are imaginary\n");
}
return 0;
}

