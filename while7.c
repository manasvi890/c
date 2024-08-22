#include<stdio.h>
int main()
{   
    int n,i;
	char ch='A';
	
	printf("n=");
	scanf("%d",&n);
	
    i=1;
do{
	printf("%c ",ch);
	ch+=2;
	i++;
}
while(i<n);
return 0;
}
	
	