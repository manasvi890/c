#include<stdio.h>
int main()
{
	int n,i;

printf("n:=");
scanf("%d",&n);

for(i=-n;i<=n;i++)
{
	printf("%d\t",i);
}
return 0;
}