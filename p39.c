#include<stdio.h>
int main()
{
	int i;
	int total=0;
	
	i=1;
	
	while(i<=10)
	{
		printf("%d\n",i);
		
		i++;
		total=total+1;
		printf("total=%d",total);
	}
	
	return 0;
}