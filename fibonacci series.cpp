// fibonacci series

#include <Stdio.h>

int main()
{
	int n=1,n1=1,n2,i;
	printf("0\t%d\t%d",n,n1);
	for(i=0;i<=7;i++)
	{
		n2=n+n1;
		n1=n;
		n=n2;
		printf("\t%d",n2);
	}
}
