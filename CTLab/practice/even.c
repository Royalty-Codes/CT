#include<stdio.h>
#include<math.h>
int main()
{
int i=0,r=0,n,x;
printf("Enter n and x");
scanf("%d%d",&n,&x);
while(i<=n)
{
if(i%2==0)
{
r-=(i)*pow(x,i-1);
}
else
{r+=(i)*pow(x,i-1);
} 
i++;
}
printf("%d\n",r);
return 0;
}


