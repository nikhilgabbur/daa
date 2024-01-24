 #include<stdio.h>
int max(int a, int b)
{
return (a > b)? a : b;
}
int knapSack(int W, int wt[], int p[], int n)
{
int i, w, x[10];
int K[n+1][W+1];
for (i = 0; i <= n; i++)
{
for (w = 0; w <= W; w++)
{
if (i==0 | w==0)
K[i][w] = 0;
else if (wt[i-1] <= w)
K[i][w] = max(p[i-1] + K[i-1][w-wt[i-1]], K[i-1][w]);
else
K[i][w] = K[i-1][w];
}
}
return K[n][W];
}
int main()
{
int i, n, p[20], wt[20], W, x[10];
printf("Enter number of objects:");
scanf("%d", &n);
 printf("Enter the weight of objects:\n");
for(i = 0;i < n; ++i)
{
scanf("%d",&wt[i]);
}
printf("Enter the profits of objects:\n");
for(i = 0;i < n; ++i)
{
scanf("%d",&p[i]);
}
printf("Enter size of knapsack:");
scanf("%d", &W);
printf("The optimal solution is %d", knapSack(W, wt, p, n));
return 0;
}
