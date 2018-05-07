// pyramid of numbers

#include <stdio.h>

int main()
{
	int i,j,n,k,count=1;
	printf("Enter number of rows : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++,k=0)
	{
		for(j=1;j<=n-i;j++)
		{
			printf("  ");
		}
		while(k != 2*i-1)
        {
            printf("%d ",count);
            k++;
            count++;
        }
		printf("\n");
	}
}
