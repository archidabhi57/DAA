#include<stdio.h>
#include<time.h>
void main()
{
	clock_t start,end;
	double cpu_time_used;
	start = clock();
	long int a,b,sum=0;
	printf("Enter number a = ");
	scanf("%ld",&a);
	
	printf("Enter number b =");
	scanf("%ld",&b);
	
	sum = a+b;
	
	printf("Sum = %ld",sum);
	
	end = clock();
	cpu_time_used = ((double) (end-start))/CLOCKS_PER_SEC;
	printf("cpu_time_used %lf ",cpu_time_used);
}
