#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	int i=0,num=0,j;
	long  b[67],n;
	printf("Enter the number: ");
	scanf("%ld",&n);
	while(n!=0)
	{
		b[i]=n%10;
		n=n/10;
	//	printf("%d",b[i]);
		i++;
	}
	for(j=0;j<i;j++)
	{
		num=num+(b[j]*(pow(2,j)));
	}
	printf("\n%d",num);
}
