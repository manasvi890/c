#include<stdio.h>
int main()
{
	int 
	
	printf("n=");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i=='A')
		{
			printf("%c",i+32);
		}
		else if(i=='a')
		{
			printf("%c",i-32);
		}
	}
	return 0;
}