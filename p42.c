#include<stdio.h>
int main()
{
	int i,j,k;
    char ch='A';
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j%2==0)
			{
				printf("%c ",ch+32);
			}
			else{
				printf("%c ",ch);
			}
			ch++;
		}
		printf("\n");
	}
	return 0;
}