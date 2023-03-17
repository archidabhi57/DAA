#include<stdio.h>
#include<time.h>
void main()
{
	clock_t start,end;
	double cpu_time_used;
	start clock();
	long int a,i=0,sum=0;
	printf("Enter number a =");
	scanf("%ld",&a);
	
	while(i<=a)
	{
		sum = sum+i;
		i++;
	}
	printf("Sum = %ld\n",sum);
	
	end = clock();
	cpu_time_used = ((double) (end-start))/CLOCKS_PER_SEC;
	printf("cpu_time_used %lf ",cpu_time_used);
}
