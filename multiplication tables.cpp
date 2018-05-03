// multiplication tables
//----------------------

#include <stdio.h>
#include <conio.h>

int main()
{
	for(int i=1;i<=10;i++)
	{
		for(int j=0;j<=10;j++)
		{
			printf("\n %d * %d = %d",i,j,i*j);
		}
		printf("\n-------------------\n");
	}
}
