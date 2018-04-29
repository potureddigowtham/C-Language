// amstrong number
// for a 3 digit number if 123= 1*1*1 + 2*2*2 + 3*3*3 then its amstrong

#include <stdio.h>
int main()
{
	int n,r,s=0;
	printf("Enter the number :");
	scanf("%d",&n);
	int t=n;
	while(n!=0)
	{
		r=n%10;
		s=s+r*r*r;
		n=n/10;
	}
	if(s==t)
	{
		printf("\nYes");
	}
	else
	{
		printf("\nNo");
	}
}
