#include<stdio.h>
int main()
{
int n,r,reverse=0,og;
printf("Enter a no\n");
scanf("%d",&n);
og=n;
while(n>0)
{
r=n%10;
reverse=(reverse*10)+r;
n/=10;
}
if(og==reverse)
printf("palindrome\n");
else
printf("Not palindrome\n");
}

