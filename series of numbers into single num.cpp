// series of numbers to single num

#include <stdio.h>
#include <conio.h>

int main(){
	int a[20],i=0,num=0;
	printf("Dimension of the number: ");
	int s;
	scanf("%d",&s);
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	int r=s*10;
	while(r<=0)
	{
		num=num+(a[i]*r);
		printf("%d",num);
		printf("%d",r);
		r=r/10;
		i++;	
	}
	printf("%d",num);
}
