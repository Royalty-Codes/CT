#include<stdio.h>
int main()
{
int a;
printf("Enter a avg: ");
scanf("%d",&a);
if(a>80)
printf("A");
else if((a>60)&&(a<=80))
printf("B");
else if((a>40)&&(a<=60))
printf("C");
else
printf("D");
return 0;
}
