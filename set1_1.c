#include<stdio.h>
#include<conio.h>
voide main()
{
int i,j,k;
char str[50],temp[10];
clrscr();
printf("enter the string");
scanf("%s",str);
n=strlen(str);
for(i=0;i<n;i++)
{
for(j=n;j>=1;j--)
{
temp[k]=str[i];
str[i]=str[j];
str[j]=str[i];
printf("\n%s",str);
}
}
return 0;
getch();
}

