#include<stdio.h>
int main()
{   int n;
	char ch='A';
	printf("n=");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		printf("%c",ch);
		ch+=2;
	}
	printf("\n");
	return 0;
}
	
	
		