#include<stdio.h>
int main()
{
	int i,n;
	
	printf("n=");
	scanf("%d",&n);
	
	i=1;
	while(i<=n)
	{
		printf("%d ",i*i);
		i++;
	}
	return 0;
}