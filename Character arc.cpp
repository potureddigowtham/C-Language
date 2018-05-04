// Nested for loop arch with characters

#include <stdio.h>
#include <string.h>
int main()
{
	char input[30];
	int i,j,k;
	printf("Enter the string :");
	scanf("%[^\n]s",&input);
	int n=strlen(input);
	for(i=0;i<=n;i++)
	{
			for(j=0;j<n-i;j++)
			{
				printf("%c",input[j]);	
			}
				for(j=0;j<i*2;j++)
				{
					printf(" ");
				}
					k=n-i-1;
					for(j=k;j>=0;j--)
					{
						printf("%c",input[j]);		
					}
					printf("\n");
					
	}	
}

