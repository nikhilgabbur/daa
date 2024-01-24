 #include<stdio.h>
 #include<conio.h>
 int i,j,k,v,u,n,ne=1;
 int visited[9],min,mincost=0,cost[9][9];
 void main( )
 {
 printf("Enter the number of vertices\n\n");
 scanf("%d",&n);
 printf("Enter the cost matrix\n\n");
 for(i=1;i<=n;i++)
 for(j=1;j<=n;j++)
 {
 scanf("%d",&cost[i][j]);
 if(cost[i][j]==0)
 cost[i][j]=999;
 }
 for(i=2;i<=n;i++)
  visited[i]=0;
 printf("The edges of the spanning tree are \n\n");
 visited[1]=1;
 while(ne<n)
 {
 for(i=1,min=999;i<=n;i++)
 {
 for(j=1;j<=n;j++)
 {
 if(cost[i][j]<min)
 if(visited[i]==0)
 continue;
 else
 {
 min=cost[i][j];
 u=i;
 v=j;
 }
 }
 }
 if(visited[u]==0||visited[v]==0)
 {
 printf("%d\t Edge\t(%d,%d)=%d\n",ne++,u,v,min);
 mincost+=min;
 visited[v]=1;
  }
 cost[u][v]=cost[v][u]=999;
 }
 printf("\n\t\tMINCOST=%d\n",mincost);
 getch( );
 }
