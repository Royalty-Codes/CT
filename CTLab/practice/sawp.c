#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter 2 number ");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("%d %d\n",a,b);
return 0;
}

