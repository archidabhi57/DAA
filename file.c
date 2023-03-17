#include<stdio.h>
#include<math.h>
void main()
{
	FILE *fp1,*fp2,*fp3;
	int i;
	fp1 = fopen("best.txt","w");
	fp2 = fopen("average.txt","w");
	fp3 = fopen("worst.txt","w");
	
	for(i=1;i<=100000;i++)
	{
		fprintf(fp1,"%d",i);
		fprintf(fp2,"%d",rand());
		fprintf(fp3,"%d",100000-i+1);
	}
}
