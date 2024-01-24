 # include<stdio.h>
 #include<conio.h>
 int mergesort(int[ ],int,int);
 void merge(int [ ],int,int,int);
 void main( )
 {
 int a[20],i,n;
 printf("enter the value for n\n");
 scanf("%d",&n);
 printf("enter the element of the merge\n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 mergesort(a,0,n-1);
 printf("merge sorted array are\n");
 for(i=0;i<n;i++)
 printf("%d\t",a[i]);
 getch();
 }
 int mergesort(int a[ ],int low,int high)
 {
 int mid;
 if(low<high)
 {
 mid=(low+high)/2;
 mergesort(a,low,mid);
  mergesort(a,mid+1,high);
 merge(a,low,mid,high);
 }

 return 0;
 }
 void merge(int a[ ],int low,int mid,int high)
 {
 int i,j,k,c[20];
 k=low;
 i=low;
 j=mid+1;
 while((i<=mid)&&(j<=high))
 {
 if(a[i]<a[j])
 c[k++]=a[i++];
 else
 c[k++]=a[j++];
 }
 while(i<=mid)
 c[k++]=a[i++];
 while(j<=high)
 c[k++]=a[j++];
 for(i=low;i<=high;i++)
 a[i]=c[i];
 }
