#include<stdio.h>
int main()
{
int num,i=1,r=1;
printf("Enter a number ");
scanf("%d",&num);
do
{
r=r*i;
i++;
}
while(i<=num);
printf("%d\n",r);
return 0;
}

