#include<stdio.h>
int main()
{
	int i,n;
	printf("n=");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d\t",i*2);
	}
	return 0;
}