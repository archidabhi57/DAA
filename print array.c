#include<stdio.h>
#include<time.h>
void main()
{
	int i,r;
	FILE *fp;
	fp = fopen("array.txt",r);
	while(fp!=EOF())
	{
		fscanf(fp,"%d",&i);
	}
}
