#include<stdio.h>
int main()
{
	int i,j,m,n;
	
	printf("n=");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(m=1;m<=n-i;m++)
		{
			printf(" ");
		}
		
		for(j=1;j<=2*i-1;j++)
		{
			if(j%2!=0){
			printf("*");}
			else{
				printf(" ");
			}
		}
			printf("\n");
		
	}
	//for lower section
	for(i=n-1;i>=1;i--)
	{
		for(m=1;m<=n-i;m++)
		{
			printf(" ");
		}
		
		for(j=1;j<=2*i-1;j++)
		{
			if(j%2!=0){
			printf("*");}
			else{
				printf(" ");
			}

		}
			printf("\n");
		
	}
	
	
		
	
	
	
  
	return 0;
}