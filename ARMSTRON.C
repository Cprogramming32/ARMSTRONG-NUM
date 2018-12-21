#include<stdio.h>
#include<conio.h>
void main()
{
int a,n,t,arm=0;
clrscr();
printf("enter n value");
scanf("%d",&n);
t=n;
while(n>0)
{
a=n%10;
arm=arm+a*a*a;
n=n/10;
}
if(t==arm)
{
printf("armstrong");
}
else
{
printf("not armstrong");

}
getch();
}
