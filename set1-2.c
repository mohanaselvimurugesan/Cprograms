#include<stdio.h>
#include<conio.h>
void main()
{
int n,fact=1,i;
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("%d",fact);
getch();
return 0;
}
