#include<stdio.h>
int num=0,b,a;
void rev()
{
	printf("num=");
	scanf("%d",&num);
	int i;
	while(num!=0)
	{
		b=a%10;
		num=num*10+b;
		a/=10;
	}
	printf("reverse=%d",num);
	
	
	
}
int main()
{
	rev();
	return 0;
}
		
		
