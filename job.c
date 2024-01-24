#include<stdio.h>
#include<conio.h>
int n,i,j,k,t;
int check(int s[],int p)
{ int ptr=0,i;
for(i=0;i<n;i++)
{
if(s[i]==p)
ptr++;
}
if(ptr==0)
return 1;
else
return 0;
}
void main()
{
int slot[10],profit,p[10],d[10],max=0;
printf("Enter the no of jobs : ");
scanf("%d",&n);
printf("\n Enter the profit of job\n");

for(i=0;i<n;i++)
{
scanf("%d",&p[i]);
}
printf("\n Enter the deadline of job\n");
for(i=0;i<n;i++)
{
scanf("%d",&d[i]);
}
for(i=0;i<n;i++)
for(j=i+1;j<n;j++)
if(p[i]<p[j])
{
t=p[i];
p[i]=p[j];
p[j]=t;

t=d[i];
d[i]=d[j];
d[j]=t;
}
printf("Profit in descending order with deadline\n");
for(i=0;i<n;i++)
{
printf("%d:%d\n",p[i],d[i]);
}
for(i=0;i<n;i++)
slot[i]=0;
for(i=0;i<n;i++)
for(j=d[i];j>0;j--)
{
if(check(slot,j)==1)
{
slot[i]=j;
break;
}
}
printf("\n\n INDEX PROFIT DEADLINE SLOT ALLOTTED ");
for(i=0;i<n;i++)
{
if(slot[i]>0)
{
printf("\n\n %d\t%d\t%d\t[%d - %d]", i+1,p[i],d[i],(slot[i]-1),slot[i]);

max=max+p[i];
}
else
printf("\n\n %d\t %d\t %d\t REJECTED", i+1,p[i],d[i]);
}
printf("\nTotal profit=%d",max);
getch();
}
