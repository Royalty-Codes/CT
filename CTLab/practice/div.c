#include<stdio.h>
#include<math.h>
int main()
{
int i=1,n,x;
printf("Enter n");
scanf("%d",&n);
while(i<=n)
{
if(n%i==0)
{printf("%d\n",i);
}
i++;
}
return 0;
}
