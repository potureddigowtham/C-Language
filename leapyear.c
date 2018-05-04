// leap year or not

#include <stdio.h>

int main()
{
	int n,i,n1;
	printf("enter the year start and end :");
	scanf("%d%d",&n,&n1);
	for(i=n;i<=n1;i++)
	{
		if(i%4==0)
		{
			printf("\t %d ",i);
		}
	}
}
