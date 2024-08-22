#include<stdio.h>
int main()
{
	char i,j;
	char c='A';
	
	
		for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%c\t",c++);
		}
		printf("\n");
	}
	return 0;
}
		