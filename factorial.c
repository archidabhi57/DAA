#include<stdio.h>
#include<time.h>
void main()
{
	clock_t start,end;
	double cpu_time_used;
	long int a,i,fact;
	printf("Enter number a =");
	scanf("%ld",&a);
	start = clock();
	
	fact=1;
	
	for(i=1;i<=a;i++)
	{
		fact= fact * i;
	}
	printf("factorial = %ld",fact);
	
	end = clock();
	cpu_time_used = ((double) (end-start))/CLOCKS_PER_SEC;
	printf("cpu_time_used %lf ",cpu_time_used);
}
