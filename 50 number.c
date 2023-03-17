#include<stdio.h>
#include<time.h>
void main()
{
	clock_t start,end;
	double cpu_time_used;
	start = clock();
	long int i=1;
	
	while(i<=50)
	{
		printf("%ld\n",i);
		i++;
	}
	end = clock();
	cpu_time_used = ((double) (end-start))/CLOCKS_PER_SEC;
	printf("cpu_time_used %lf ",cpu_time_used);
}
