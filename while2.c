#include<stdio.h>
int main()
{
	int i,sum=0;
	
	i=1;
	while(i<=6)
	{
		if(i%2==0)
		{
			sum=sum+i;
		}
		i++;
	}
	printf("sum=%d",sum);
	return 0;
}