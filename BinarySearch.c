#include<stdio.h>
int binsearch(int[],int,int,int);
int main()
{
	int num,i,key,position;
	int low,high,list[100];
	printf("\n Enter total number of elements=");
	scanf("%d",&num);
	
	printf("\n Enter Element=\n");
	for(i=0;i<num;i++)
	{
		scanf("%d",&list[i]);
	}
	for(i=1;i<num;i++)
	{
		if(list[i]<list[i-1])
		{
			printf(" not sorted ");
		}
	}
	low=0;
	high=num-1;
	printf("\n Enter search element =");
	scanf("%d",&key);
	
	position = binsearch(list,key,low,high);
	if(position!=-1)
	{
		printf("\n The number present at =%d",(position+1));
	}
	else
	{
		printf("\n number is not in list");
	}
}

int binsearch(int a[],int x,int low, int high)
{
	int k;
	if(low>high)
	{
		return -1;
	}
	k =(low+high)/2;
	if(x==a[k])
	{
		return(k);
	}
	else if(x<a[k])
	{
		binsearch(a,x,low,k-1);
	}
	else
	{
		binsearch(a,x,k+1,high);
	}
}

