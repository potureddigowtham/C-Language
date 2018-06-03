// swapping of 2 integers without temp varialble
//------------------------------------------------
#include <stdio.h>

int main()
{
	int a,b;
	printf("enter values for 2 num :");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("A = %d B = %d",a,b);
}
//-----------------------