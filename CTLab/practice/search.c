#include<stdio.h>
int search(int n,int key, int arr[], int loc[]);
int main()
{
int n,r,count;
printf("Enter elements to be entered");
scanf("%d",&n);
int arr[n], loc[n];
for(int i=0;i<n;i++)
scanf("%d",&arr[i]);
int key;
printf("Enter value to find");
scanf("%d",&key);
count=search(n,key,arr,loc);
if(count==0)
printf("not found");
else
{printf("%d occur %d at ",key,count);
for(int i=0;i<count;i++)
printf("%d ",loc[i]);
return 0;
}
}


int search(int n,int key, int arr[], int loc[])
{
int count=0;
for(int i=0;i<n;i++){
if(arr[i]==key)
{
loc[count]=i+1;
count++;
}
}
return count;
}


