#include<stdio.h>
int main()
{
	int i,n;
	
	printf("n=");
	scanf("%d",&n);
	
	i=1;
	while(i<=n)
	{
		if(i%2==0)
		{
			printf("%d ",i*i);
			
		}
		else{
			printf("%d ",i);
		}
		i++;
	}
	return 0;
}
