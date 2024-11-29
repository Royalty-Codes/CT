#include<stdio.h>
int swap(int a,int b);
int sum(int n);
int main()
{
int a,b;
printf("Enter two no\n");
scanf("%d%d",&a,&b);
swap(2,3);
}
int swap(int x,int y)
{
int c,r,n;
c=x;
x=y;
y=c;
printf("%d\n%d\n",x,y);
scanf("%d",&n);
r=sum(n);
printf("%d",r);
}
int sum(int n)
{
	
	if(n==1)
	return 1;
	else
	return n+sum(n-1);

}

