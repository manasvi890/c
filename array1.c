#include<stdio.h>
int main()
{
int n,m;

printf("enter number of arr1:");
scanf("%d",&n);
int arr[n];

for(int i=0;i<n;i++)
{
	printf("enter element of position %d:",i);
	scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++)
{
	printf("%d ",arr[i]);

}


printf("\nenter number of arr1:");
scanf("%d",&m);
int arr1[m];

for(int i=0;i<m;i++)
{
	printf("enter element of position %d:",i);
	scanf("%d",&arr[i]);
}

for(int i=0;i<m;i++)
{
	printf("%d ",arr[i]);

}
return 0;
}
