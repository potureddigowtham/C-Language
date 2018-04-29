// even,odd and average of both when range is given.

#include <stdio.h>
#include <conio.h>
int main()
{
	int range;
	printf("enter range : ");
	scanf("%d",&range);
	int avgeven,avgodd,et=0,ot=0,ec=0,oc=0,i=0,j=0;
	printf("\nEven Numbers : ");
	for(i=1;i<=range;i++)
	{
		if(i%2==0)
		{
			printf("\t%d",i);
			et=et+i;
			ec=ec+1;
		}
	}
	printf("\nOdd Numbers : ");
	for(j=1;j<=range;j++)
	{
		if(j%2!=0)
		{
			printf("\t%d",j);
			ot=ot+j;
			oc=oc+1;
		}
	}
	avgeven=et/ec;
	avgodd=ot/oc;
	printf("\nAverage of all Even Numbers in range %d : %d",range,avgeven);
	printf("\nAverage of all Odd Numbers in range %d : %d",range,avgodd);
	getch();
}
