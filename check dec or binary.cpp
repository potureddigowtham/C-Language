//check if binary or decimal

#include <stdio.h>
#include <conio.h>

int main()
{
	int n,i,a[20],val=0;
	printf("enter the number: ");
	scanf("%d",&n);
	while(n!=0)
	{
	if(n%10==0 || n%10==1)
	{
		val=val+1;
	}
	n=n/10;
	}
	
	if(val<1)
	{
		printf("its a decimal number");
	}
	else
	{
		printf("its a binary number");
	}
	
}
