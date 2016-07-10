#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,i,j,sum=0;
clrscr();
printf("\n enter the number of students:");
scanf("%d",&n);
m=2*n;
for(i=0;i<m;i++)
{
for(j=i+1;j<=m;j++)
{
printf("\n%d\t%d\n",i,j);
sum++;
} }
printf("the daily walk combination is %d",sum);
getch();
}
