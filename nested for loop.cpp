// nested for loop 

#include <stdio.h>

int main()
{
	int i,j,n;
	int count=0;
	printf("Enter the size of triangle :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i>=j)
			{
				if(count%2==0)
				{
					printf("1");
				}
				else
				{
					printf("0");
				}
				count++;
			}
		}
		printf("\n");
	}
}
