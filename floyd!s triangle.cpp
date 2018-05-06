// floyd!s triangle 
//-----------------


#include <stdio.h>

int main()
{
	int i,j;
	int count=1;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			if(i>=j)
			{
				printf("%d",count++);	
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
