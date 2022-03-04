#include<stdio.h>
int stack[100],i,ch,top,temp;
void push()
{
int a,n;
if(temp==n)
printf("stack full");
else
{
printf("Enter Number");
scanf("%d", &a);
top=top+1;
stack[top]=a;
}
}
void pop()
{
if(top==-1)
printf("stack empty");
else
top=top-1;
}
void show()
{
for(i=top;i>0;i--)
{
printf("%d",stack[i]);
}
}
void main()
{
int a;
printf("Enter the number of elements");
scanf("%d",&a);
while(ch!=4)
{
printf("\n 1.push \n 2.pop \n 3.show \n 4.exit");
printf("enter ch\n");
scanf("%d",&ch);
switch(ch)
{
case 1: { 
         push();  
         break;
         }
case 2: {
        pop();
       break;
        }
case 3: {
        show();
        break;
         }
default: {
        printf("invalid entry");
}
};
}
}


