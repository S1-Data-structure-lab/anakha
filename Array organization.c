#include<stdio.h>
void main()
{
int a[10],n,i;
printf("Enter no of ele\n");
scanf("%d",&n);
printf("Enter eles\n");
for(i=0;i<n;++i)
scanf("%d",&a[i]);
printf("array eles\n");
for(i=0;i<n;++i)
printf("%d\n",a[i]);
}
