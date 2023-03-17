#include<stdio.h>
int a[1000] , n;
void Quick_Sort(int i ,int j)
{
	if(i<j)
	{
		int position;
		position = Pivot(i,j);
		Quick_Sort(i,position-1);
		Quick_Sort(position+1,j);
	}
}

int Pivot(int i, int j )
{
	int temp;
	int p = a[i];
	int k =i;
	int l = j+1;
	
	
	do{
		k++;
	}
	while(a[k]<p);
	
	do{
		l--;
	}
	while(a[l]>p);
	
	while(k<l)
	{
		temp = a[k];
		a[k]=a[l];
		a[l]=temp;
		
		do{
		k++;
	}
	while(a[k]<p);
	
	do{
		l--;
	}
	while(a[l]>p);
	}
	
	temp = a[i];
	a[i]=a[l];
	a[l]=temp;
	return l;
}

void main()
{
int i;
	printf("Enter Number of elements=");
	scanf("%d",&n);
	
	for(i =0;i<n;i++){
		scanf("%d",&a[i]);
	}
	Quick_Sort(0,n-1);
	for(i =0;i<n;i++){
		printf("%d",a[i]);
	}
}

