#include<stdio.h>
void main()
{
	int a[50],x,n,i,j;
	printf("Enter Number=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=1;i<n;i++)
	{
		x=a[i];
		j=i-1;
		while(x<a[j] && j>=0)
		{
			a[j+1] = a[j];
			j=j-1;
			a[j+1]=x;
		}
		
	}
	for(i=0;i<n;i++)
	{
		printf("Number=%d\n",a[i]);
		
	}
	
}
