#include<stdio.h>
int main()
{
	int i,n;
	int k=1;
	
	printf("n=");
	scanf("%d",&n); 
	
	i=1;
	do{
		printf("%d ",i*k);
		k+=k;
		i++;
	}
	while(i<=n);
	return 0;
}