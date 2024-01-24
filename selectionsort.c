#include<stdio.h>
void main()
{
int a[10],j,i,n,temp,pos;
printf("Enter the number of limit\n");
scanf("%d",&n);
printf("Enter the number of element\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
pos=i;
for(j=i+1;j<n;j++)
{
if(a[j]<a[pos])
pos=j;
}
temp=a[pos];
a[pos]=a[i];
a[i]=temp;
}
printf("The selection sorted element\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}
