// determinant of matrix

#include <stdio.h>
#include <conio.h>

int main()
{
	int a[20][20],i,j,n,count=0,det;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
	
	if(n==2)
	{
		det=a[0][0]*a[1][1]-a[0][1]*a[1][0];
		printf("%d",det);
	}
	
	if(n==3)
	{
		int a1=a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1]);
		int a2=(a[0][1]*(a[1][0]*a[2][2]-a[2][0]*a[1][2]));
		int a3=(a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]));
		det=a1-a2+a3;
		printf("%d",det);
	}
}
