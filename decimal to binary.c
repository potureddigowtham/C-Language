#include <stdio.h>
#include <conio.h>

int main()
{
	int n,a[20],i,j,temp=0,count=0;
	printf("Enter the number to change into BINARY: ");
	scanf("%d",&n);
	for(i=0;n>=1;i++)
	{
		if(n%2==0)
		{
			a[i]=0;
		}
		else
		{
			a[i]=1;
		}
	//	printf("%d",a[i]);
		count=count+1;
		n=n/2;
	}
	j=count;
	for(i=count;i<=count && i>=1;)
	{
		i=i-1;
		printf("%d",a[i]);
	} 
}
