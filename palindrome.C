#include<stdio.h>
int main()
{
int n,num,reminder,reverse=0;
printf("enter the number",n);
scanf("%d",&n);
num=n;
while(n!=0)
{
reminder=n%10;
reverse=reverse*10+reminder;
n=n/10;
}
if(num==reverse)
printf("yes",num);
else
printf("no",num);
return 0;
}
