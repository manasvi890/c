#include<stdio.h>
int circle()
{
	int r,area;
	printf("r=");
	scanf("%d",&r);
	area=3.14*r*r;
	
	return area;
}
int main()
{
	int area;
	area=circle();
	printf("area=%d",area);
	return 0;
}
	