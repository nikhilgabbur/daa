 #include<stdio.h>
 void DFS(int);
 void bfs(int);
 int G[10][10],visited[10],n,v,i,j,queue[10],front=-1,rear=-1;
 int main()
 {
 int i,j;
 printf("Enter number of vertices:");
 scanf("%d",&n);
 //read the adjecency matrix
 printf("\nEnter adjecency matrix of the graph:\n");
 for(i=0;i<n;i++)
for(j=0;j<n;j++)
 scanf("%d",&G[i][j]);
 //visited is initialized to zero
 for(i=0;i<n;i++)
 visited[i]=0;
 queue[i]=0;
 printf("\nDFS algorithm\n");
 DFS(0);
 printf("\nEnter the starting vertex:\n");
 scanf("%d",&v);
 bfs(v);
 printf("The node which are reachable using BFS algorithm are: \n");
 for (i = 0; i <n; i++)
 {
 if (visited[i])
 {
 printf("%d\t", i);
 }
 }
 return 0;
 }
 void DFS(int i)
 {
 int j;
printf("\n%d",i);
 visited[i]=1;
 for(j=0;j<n;j++)
 if(!visited[j]&&G[i][j]==1)
 DFS(j);
 }
 void bfs(int v)
 {
 for (i = 1; i <= n; i++)
 if (G[v][i] && !visited[i])
 queue[++rear] = i;
 if (front <= rear)
 {
 visited[queue[front]] = 1;
 bfs(queue[front++]);
 }
 }
