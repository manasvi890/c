//1,4,12,32,80...n

#include<stdio.h>
int main()
{
	int i,n;
	printf("n=");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%4!=0)
		{
			printf("%d\t",i*4);
		}
		
	
			
		else if(i%4==0)
		{
			printf("%d\t",i);
		}
	
		
	}
	
	return 0;
}
	
	