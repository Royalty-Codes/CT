#include<stdio.h>
int sum(int a,int b);
int main()
{
int a,b,r;
printf("Enter two no\n");
scanf("%d%d",&a,&b);
r=sum(a,b);
printf("%d\n",r);
}
int sum(int x,int y)
{
int c;
c=x+y;
return c;
}
