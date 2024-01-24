 #include<stdio.h>
 void maxmin(int [ ],int,int,int*,int*);
 void main( )
 {
 int a[10],n,i,min,max;
 printf("enter the array limit\n");
 scanf("%d",&n);
 printf("enter the array element\n");
 for(i=0;i<n;i++)
 {
 }
 scanf("%d",&a[i]);
 maxmin(a,0,n-1,&max,&min);
 printf("max=%d\n",a[max]);
 printf("min=%d\n",a[min]);
 }
  void maxmin(int a[],int i,int j,int *max,int *min)
  {
 int mid,max2,min2,max1,min1;
 if(i==j)
 {
     *max=*min=i;
 }

 else if(i==j-1)
     {
 if(a[i]>a[j])
 {
    *max=i;
 *min=j;
 }
  else
 {
 *max=j;
 *min=i;
 }}
 else{
  mid=(i+j)/2;
 maxmin(a,i,mid,&max2,&min2);
 maxmin(a,mid+1,j,&max1,&min1);
 if(a[max2]<=a[max1])
 {
     *max=max1;
 }
  else
    {
         *max=max2;
    }
     if(a[min2]>a[min1])
     {
 *min=min1;
     }
     else {
        *min=min2;
     }
     }
  }

