#include<stdio.h>
int main()
{
	int n;
	char ch;
	
	
	
	ch='A';
	do{
		if(ch%2==0)
		{
			printf("%c ",ch+32);
		}
		else{
			printf("%c ",ch);
		}
		ch++;
	}
	while(ch<='Z');
	return 0;
}