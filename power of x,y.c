#include<stdio.h>
#include<time.h>
void main()
{
	clock_t start,end;
	double cpu_time_used;
	start = clock();
	
	long int x,y,i,Power;
	printf("Enter number x=");
	scanf("%ld",&x);
	printf("Enter number y=");
	scanf("%ld",&y);
	
	long int power = 1;
	for(i=1;i<=y;i++)
	{
		power = power*x;
	}
	printf("power = %ld ",power);
	
	end = clock();
	cpu_time_used = ((double) (end-start))/CLOCKS_PER_SEC;
	printf("cpu_time_used %lf ",cpu_time_used);
}
