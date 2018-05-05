// number combinations
//--------------------

#include <stdio.h>

int main()
{
	int n,r,sum=0;
	int range;
	printf("Enter numbers for combination :");
	scanf("%d",&n);
	printf("Enter the range :");
	scanf("%d",&range);
	while(n>0)
	{
		r=n%10;
		printf("\n%d\t%d%d",r,r,r);
		sum=sum*10+r;
		n=n/10;
	}
//	printf("\n%d",sum);
}
