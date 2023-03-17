#include<stdio.h>
void main()
{
	int d,rem,rev=1,x=0;
	printf("Enter number Decimal = ");
	scanf("%d",&d);
	
	while(d)
	{
		rem = d%2;
		x = x + (rem*rev);
		rev = rev*10 ;
		d = d/2;	
	}
	printf("%d",x);
}
