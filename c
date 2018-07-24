#include<stdio.h>
int main()
{
int i,num,p=0;
printf("enter a number":\n");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
if(num%i==0)
{
p++;
}
if (p==2)
{
printf("number is prime");
}
else
{
printf("number is not prime");
}
}
