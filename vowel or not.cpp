// vowel or not in a sentence
//------------------------------------

#include <stdio.h>
#include <string.h>
int main()
{
	char sentence[30];
	int i,flag=0;
	printf("Enter the sentence : ");
	scanf("%[^\n]s",sentence);
//	printf("%c",sentence[4]);
	for(i=0;i<=30;i++){
		if(sentence[i]=='a'||sentence[i]=='e'||sentence[i]=='i'||sentence[i]=='o'||sentence[i]=='u')
		{
			flag=1;
		}
	}
	if(flag==1)
	{
		printf("vowel");
	}
	else
	{
		printf("nope");	
	}
}
