#include<stdio.h>
int main()
{
	int z;
	
	
	printf("z=");
	scanf("%d",&z);
	
	if(z>100 && z<500) 
	{
		printf("x");
	}
	else if (z<2000 || z>3000)         
	{
		printf("y");
	}
	
	else 
	{
		printf("value not match\n");
	}
	return 0;
}