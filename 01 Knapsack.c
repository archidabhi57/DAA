#include<stdio.h>

void main()
{
	int n,i, wt[n],cap,val[n];
	printf("Enter Number=");
	scanf("%d",&n);
	
	printf("Enter Capacity=");
	scanf("%d",&cap);
	
	printf("Enter Weight=");
	scanf("%d",&wt[n]);
	
	printf("Enter value=");
	scanf("%d",&val[n]);
	
	knapsack();
	
}
void knapsack(int cap,int n,int wt[],int val[])
{
	int i,j;
	int v[n+1][cap+1];
	for(i=0;i<n;i++)
	{
		v[i][0]=0;
	}
	for(i=0;i<n;i++)
	{
		v[0][i]=0;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<cap;j++)
		{
			if(wt[i]<=cap)
			{
				v[i][j]=getmax(v[i-1][j] , val[i]+v[i-1][j-wt[i]]);
			}
			else
			{
				v[i][j] = v[i-1][j];
			}
		}
	}
}
void getmax(int x, int y)
{
	if(x>y)
	{
		return x;
	}
	else
	{
		return y;
	}
}


