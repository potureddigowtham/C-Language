//local variables
//---------------

#include <stdio.h>
#include <conio.h>
int fun1();
int fun2();

int main()
{
	int a=1000;
	fun2();
	printf("\n%d",a);
}

int fun1()
{
	int a=10;
	printf("%d",a);
}

int fun2()
{
	fun1();
	int a=100;
	printf("\n%d",a);
}


