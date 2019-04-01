#include<stdio.h>
int main()
{
char a[100],b[100];
int i,j,count=0;
scanf("%s",a);
scanf("%s",b);
for(i=0;a(i)='/0';i++)
{
for(j=0;b(j)='/0';j++)
{
if(a[i]!=b[i])
{
count++;
}
}
}
if(count==1)
{
printf("yes");
}
else
{
printf("no");
}
getch();
