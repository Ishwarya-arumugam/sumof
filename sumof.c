#include<stdio.h>
#include<conio.h>
void main()
{
int n,a=0,b,c,d,sum=0;
clrscr();
scanf("%d",&n);
c=n;
while(c!=0)
{
b=n%10;
a=a+b;
c=c/10;
}
printf("%d",a);
d=a;
while(a)
{
b=a%10;
a=a/10;
sum=sum*10+b;
}
printf("%d",sum);
if(d==sum)
{
printf("Palindrome");
}
else
{
printf("Not palindrome");
}
getch();
}
