#include <stdio.h>
 #define MAX_VERTICES 100
 void initializeMatrix(int matrix[MAX_VERTICES][MAX_VERTICES], int n)
 {
 for (int i = 0; i < n; i++)
 {
 for (int j = 0; j < n; j++)
 {
 matrix[i][j] = 0;
 }
 }
 }
 void addEdge(int matrix[MAX_VERTICES][MAX_VERTICES], int start, int end)
  {

 matrix[start][end] = 1;
 }
 void calculateDegree(int matrix[MAX_VERTICES][MAX_VERTICES], int n)
 {
 int inDegree[MAX_VERTICES] = {0};
 int outDegree[MAX_VERTICES] = {0};
 for (int i = 0; i < n; i++)
 {
 for (int j = 0; j < n; j++)
 {
 outDegree[i] += matrix[i][j];
 inDegree[j] += matrix[i][j];
 }
 }
 printf("Vertex\tIn-Degree\tOut-Degree\n");
 for (int i = 0; i < n; i++)
 {
 printf("%d\t%d\t\t%d\n", i, inDegree[i], outDegree[i]);
 }
 }
 void displayMatrix(int matrix[MAX_VERTICES][MAX_VERTICES], int n) {
 printf("\nAdjacency Matrix:\n");
 for (int i = 0; i < n; i++) {
 for (int j = 0; j < n; j++) {
 printf("%d ", matrix[i][j]);
 }
  printf("\n");
 }
 }
 int main() {
 int n, e; // n: number of vertices, e: number of edges
 printf("Enter the number of vertices: ");
 scanf("%d", &n);
 int adj[MAX_VERTICES][MAX_VERTICES];
 initializeMatrix(adj, n);
 printf("Enter the number of edges: ");
 scanf("%d", &e);
 printf("Enter the edges (start and end vertices):\n");
 for (int i = 0; i < e; i++) {
 int start, end;
 scanf("%d %d", &start, &end);
 addEdge(adj, start, end);
 }
 calculateDegree(adj, n);
 displayMatrix(adj, n);
 return 0;
 }
