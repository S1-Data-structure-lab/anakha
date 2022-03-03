#include<stdio.h>
void main()
{
int a[10],i,j,n,temp;
printf("Enter no of elements of array\n");
scanf("%d",&n);
printf("enter array elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("array before sorting\n");
for(i=0;i<n;++i)
printf("%d\n",a[i]);
for(i=0;i<n;++i)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("After  after sorting\n");
for(i=0;i<n;++i)
printf("%d\n",a[i]);
}
