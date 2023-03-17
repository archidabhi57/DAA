#include<stdio.h>
void main()
{
	int n,i,j=1,temp;
	printf("\nEnter no. of line in pattern : ");
	scanf("%d",&n);
		
	for (i=1 ; i<=n ; i++)
	{
		temp=j+i;
		while (j<temp)
		{
			printf("%d ",j);
			j++;
		}
		printf("\n");
	}
}
