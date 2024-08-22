#include<stdio.h>
int main()
{
	int i,j;
	
	
		
	for(i=1;i<=10;i++)		
		if(i%2!=0)
		{
			for(j=1;j<=10;j++)
			if(j%2!=0)
			{
			printf("%d\t",i);
			}
			printf("\n");
		}
		return 0;
}