#include<stdio.h>
int main()
{
	char i,j;
	
	for(i='A';i<='E';i++)
	{
		for(j='A';j<='E';j++)
		{
			printf("%c\t",i);
		}
		printf("\n");
	}
	return 0;
}