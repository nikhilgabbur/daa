#include<stdio.h>
#include<conio.h>
int i,j,k,a,b,v,u,n,ne=1;
int visited[9],min,mincost=0,cost[9][9],parent[9];
void main( )
{
printf("Enter the number of vertices\n\n");
scanf("%d",&n);
printf("Enter the cost matrix\n\n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
{
scanf("%d",&cost[i][j]);
if(cost[i][j]==0)cost[i][j]=999;
}
printf("The edged of the spanning tree are\n\n");
while(ne<n)
{
for(i=1,min=999;i<=n;i++)
for(j=1;j<=n;j++)
{
if(cost[i][j]<min)
{
min=cost[i][j];

a=u=i;
b=v=j;
}
}
if(parent[u]) u=parent[u];
if(parent[v]) v=parent[v];
if(u!=v)
{
printf("%d\tEdge\t(%d,%d)=%d\n",ne++,a,b,min);
mincost+=min;
parent[v]=u;
}
cost[a][b]=cost[b][a]=999;
}
printf("\n\t\tMINCOST=%d\n",mincost);
getch( );
}
