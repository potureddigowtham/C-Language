//prime factors of numbers

#include <stdio.h>
int main()
{
	int i,j,n,flag=0;
	printf("Enter the number :");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i%j==0)
			{
				flag++;
				//printf("\n %d",flag);
			}
		}
		if(flag==2)
		{
			if(n%i==0)
			{
				printf("\n %d is a prime factor ",i);
			}
		}
		flag=0;
	}
}
