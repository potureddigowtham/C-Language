// Inverse of matrix  ......

#include <stdio.h>
#include <conio.h>

int main()
{
	int a[20][20],i,j,b[22][20],l,m,t,n,c[20];float det=0,d[20][20];
	printf("Enter n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(l=0;l<n;l++)
	{
		for(m=0;m<n;m++)
		{
			t=0;
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					if(i!=l && j!=m)
					{
						c[t]=a[i][j];
						t++;
					}
				}
			}
			b[l][m]=(c[0]*c[3])-(c[1]*c[2]);
		}
	}
	printf("Matric a: ");
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
	printf("Adjoint a: ");
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t%d",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if((i+j==1)||(i+j==3))
			a[i][j]=a[i][j]*-1;
		}
	}
	
	printf("\nvalues of a :");
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		printf("\t%d",a[i][j]);
	}
	for(i=0;i<n;i++)
	{
		det=0;
		for(j=0;j<n;j++)
		det=det+a[i][j]*b[i][j];
		if(i==0)
		{printf("\ndet = %f",det);
		}
	}	
	if(det!=0)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				d[i][j]=b[i][j]/det;	
			}	
		}
	printf("\nInverse of a matrix : ");	
	printf("\n");
	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("\t%f",d[i][j]);	
			}	
			printf("\n");
		}
	}
	else
	printf("\n Matrix a cannot be inversed ");
	getch();
}
