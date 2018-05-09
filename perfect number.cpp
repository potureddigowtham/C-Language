// perfect number 
// number itself is equal to sum of its proper divisors
//------------------------------------------------------


#include <stdio.h>

int main()
{
	int n,s=0;
	printf("Enter the number : ");
	scanf("%d",&n);
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			s=s+i;
		}
	}
	if(s==n)
	{
		printf("Yes %d is a Perfect Number.",n);
	}
	else
	{
		printf("No %d is not a Perfect Number.",n);
	}
}
