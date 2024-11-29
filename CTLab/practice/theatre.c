#include<stdio.h>
int main()
{
int th[25];
printf("\t\tSCREEN\n");
for (int i=0;i<5;i++)
 {for(int j=0;j<5;j++)
  {if(i==0)
    { if(j!=1)
  	{printf("A");
   	printf("%d\t",j+1);}
      else
       printf("na\t");
       }
  if(i==1)
  {
   if(j!=0 && j!=3)
   {
   printf("B");
   printf("%d\t",j+1);}
   else
   printf("na\t");
   }
  if(i==2)
  {if(j!=2 && j!=4)
    {
   printf("C");
   printf("%d\t",j+1);}
   else
   printf("na\t");
   }
  if(i==3)
  {if(j!=1)
   {
   printf("D");
   printf("%d\t",j+1);}
   else
   printf("na\t");
   }
  if(i==4)
  {if(j!=3)
   {
   printf("E");
   printf("%d\t",j+1);}
   else
   printf("na\t");
   }
   }
   printf("\n");
   }}
