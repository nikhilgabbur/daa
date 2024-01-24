#include<stdio.h>
#include<conio.h>
int quicksort(int [ ],int,int);
int partition(int [ ],int,int);
void main( )
{
int a[20],i,n;
clrscr( );
printf("enter the value of n:\n");
scanf("%d",&n);
printf("enter the number to be sort\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
quicksort(a,0,n-1);
printf("Quick sorted array is:\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
getch( );
}
int quicksort(int a[ ],int l,int h)
{
int j;
if(l<h)
{
j=partition(a,l,h);
quicksort(a,l,j-1);
quicksort(a,j+1,h);
}
}
int partition(int a[ ],int l,int h)
{
int i,j,p,t,k;
k=a[l],i=l+1,j=h;
while(1)
{
while(i<h&&p>=a[i])
i++;
while(p<a[j])
j--;
if(i<j)
{
t=a[ i ];
a[ i ]=a[ j ];
a[ j ]=t;
}
else
{
t=a[l];
a[l]=a[j];
a[j]=t;
return j;
}
}
}
