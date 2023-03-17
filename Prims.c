#include<stdio.h>
int a,b,v,u,num,i,j,numOfEdge=1;
int visited[10]={0},min,mincost=0,cost[10][10];
void main()
{
	printf("Enter the number of nodes=");
	scanf("%d",&num);
	printf("\n Enter the adjecancy matrix== \n ");
	
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=num;j++)
		{
			scanf("%d",&cost[i][j]);
			if(cost[i][j]==0)
			{
				cost[i][j]=999;
			}
		}
    }
		
		visited[1]=1;
		printf("\n");
		while(numOfEdge<num)
		{
			for(i=1,min=999;i<=num;i++)
			{
				for(j=1;j<=num;j++)
				{
					if(cost[i][j]<min)
					{
						if(visited[i]!=0)
						{
							min=cost[i][j];
							a=u=i;
							b=v=j;
						}
					}
				}
			}
			
			if(visited[u]==0 || visited[v]==0)
			{
				printf("\n Edge %d: (%d,%d) cost:%d",numOfEdge++,a,b,min);
				mincost+=min;
				visited[b]=1;
			}
			cost[a][b]=cost[b][a]=999;
		}
		printf("\n Minimum Cost=%d",mincost);
		
	
}
