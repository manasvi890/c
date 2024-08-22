#include<stdio.h>
int main()
{
int n,even=0,odd=0;


printf("n=");
scanf("%d",&n);
int arr[n];

for(int i=0;i<n;i++)
{
	printf("element",i);
	scanf("%d",&i);
	
	
	
	
} 
for( int i=0;i<n;i++)
{
	if(i%2==0)
	{   
      
		even+=i;
	}else{
		odd+=i;
	}
}

printf("odd=%d\n ",odd);
	printf("even=%d",even);
return 0;
}
