#include<stdio.h>
int main()
{
int n,total=0;
printf("n=");
scanf("%d",&n);

int arr[n];

for(int i=0;i<n;i++)
{
	printf("element:");
	scanf("%d",&arr[i]);
	
	total+=arr[i];
	
}


printf("total=%d",total);


return 0;
}