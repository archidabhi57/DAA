#include<stdio.h>
void main()
{
	
	int a[50],i,j,minj,minx,n;
	
	printf("Enetr Number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		minj=i;
		minx=a[i];
		for(j=i+1;j<n;j++)
		{
			if(a[j]<minx){
				minj=j;
				minx=a[j];
			}
		}
		a[minj]=a[i];
		a[i] =minx;
	}
	
	
	for(i=0;i<n;i++)
	{
		printf("Sorted array=%d\n",a[i]);
		
	}
	
}
