#include<stdio.h>
int main()
{
int s,h,m,l,l2,s1;
printf("Enter seconds ");
scanf("%d",&s);
h=(s/3600);
l=s%3600;
m=l/60;
l2=l%60;
s1=l2;
printf("%dh ",h);
printf("%dm ",m);
printf("%ds\n",s1);
return 0;
}
