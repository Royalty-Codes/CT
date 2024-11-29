#include<stdio.h>
int main()
{
int n,r;
printf("Enter a no\n");
scanf("%d",&n);
while(n>0)
{
r=n%10;
printf("%d",r);
n/=10;
}
printf("\n");
}
