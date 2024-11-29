#include<stdio.h>
int gt(int a, int b, int c);
int main()
{
int a,b,c;
printf("Enter 3 no\n");
scanf("%d%d%d",&a,&b,&c);
gt(a,b,c);
}
int gt(int a, int b, int c)
{
if((a>b) && (a>c))
printf("%d is greatest\n",a);
else if((b>a) && (b>c))
printf("%d is greatest\n",b);
else
printf("%d is greatest\n",c);
}
