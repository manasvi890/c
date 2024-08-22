#include<stdio.h>
int main()
{
	int i,j;
    char ch='A';
	
	
	for(i=1;i<=5;i++)
	{
		{
		if(i%2==0)
		
		{
			printf("%c ",ch+32);
			
		}
		else{
		
		printf("%c ",ch);
	}
		for(j=1;j<=i;j++)
		
		ch++;
	}
	printf("\n");
	}
	
	
	return 0;
}