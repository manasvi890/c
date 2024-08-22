#include<stdio.h>
int main()
{
int arr[3][3];
int arr1[3][3];
int sum=0;


for(int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
	{ 
		scanf("%d",&arr[i][j]);
		
	}
	
}
for(int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
	{ 
		printf("%d ",arr[i][j]);
		sum+=arr[i][j];
	}
	printf("\n");
}


printf("second array");
for(int m=0;m<3;m++)
{
	for(int n=0;n<3;n++)
	{ 
		scanf("%d",&arr1[m][n]);
		
	}
	
}
for(int m=0;m<3;m++)
{
	for(int n=0;n<3;n++)
	{ 
		printf("%d ",arr1[m][n]);
		sum+=arr1[m][n];
	}
	printf("\n");
}
printf("sum=%d",sum);


return 0; 
}
