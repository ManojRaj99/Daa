#include<stdio.h>

void bfs(int n,int a[n][n],int source,int visited[n]){
    int q[n];
    int f=0,r=-1;
    q[++r]=source;
    while (f<=r){
        int u=q[f++];
        for(int i=1;i<=n;i++)
        if(visited[i]==0&&a[u][i]==1){
            visited[i]=1;
            q[++r]=i;
            
        }
       
        printf("%d\n",u);

    }
    
}

int main(){
    int n,source;
    printf("enter the no of vertices\n");
    scanf("%d",&n);
    int a[n][n],visited[n];
    printf("the adjacency matrix\n");
    for(int i=1;i<=n;visited[i++]=0)
    for(int j=1;j<=n;j++)
    scanf("%d",&a[i][j]);
    printf("enter the source node\n");
    scanf("%d",&source);
    visited[source]=1;
    bfs(n,a,source,visited);
}