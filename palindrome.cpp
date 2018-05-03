// palindrome number
// number should be same even if reversed. ex: 121 , 12321. 
//--------------------------------------------------------

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
		s=s*10+r;
		n=n/10;
	}
	printf("s=%d",s);
	if(s==t)
	{
		printf("\nYes");
	}
	else
	{
		printf("\nNo");
	}
}
