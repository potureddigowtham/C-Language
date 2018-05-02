// Prime number or not

#include <stdio.h>

int main()
{
	int i,n,j,flag=0;
	printf("Enter the range of numbers :");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		for(j=1;j<=10;j++)
		{
			if(i%j==0)
			{
				flag++;
			}
		}
		if(flag==2)
			{
				printf("\t%d",i);
			}
			flag=0;
	}
}

