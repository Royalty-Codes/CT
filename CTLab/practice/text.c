#include<stdio.h>
int main()
{
int a,b,s;
char ch;
printf("Enter two no ");
scanf("%d%d",&a,&b);
printf("Enter Choice (s for Sum, d for Difference, m for Multiplication, q for Division): ");
    scanf(" %c", &ch);
switch(ch)
{
case 's':
{printf("Sum = %d\n",s=a+b);
break;
}
case 'd':
{printf("Dif = %d\n",s=a-b);
break;
}
case 'm':
{printf("Mul = %d\n",s=a*b);
break;
}
case 'q':
{printf("Div = %d\n",s=a/b);
break;
}
default:
printf("Invalid input");
}
return 0;
}

