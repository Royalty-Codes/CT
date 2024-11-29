#include<stdio.h>
#include<math.h>
int gcd(int a, int b) {
while (a != b) {
if (a > b) {
a -= b;
} else {
b -= a;
}
}
return a;
}
int main()
{
int a,b,gcf,lcm;
printf("Enter a and b");
scanf("%d%d",&a,&b);
gcf = gcd(a,b);
lcm=(a*b)/gcf;
printf("%d    %d\n",gcf,lcm);
return 0;
}
