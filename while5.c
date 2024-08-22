#include<stdio.h>
int main()
{
	int i,n;
	
	printf("n=");
	scanf("%d",&n);
	i=1;
	do{
	
		printf("%d ",i*2);
		
		i++;
	}
	while(i<=n);
	return 0;
}
		