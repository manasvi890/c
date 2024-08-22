#include<stdio.h>


	void intrest()
	{
		int amt,rate,si;
		
		printf("amt=");
		scanf("%d\n",&amt);
		
		printf("rate=");
		scanf("%d\n",&rate);
		
		si=(amt*rate)/100;
		printf("si=%d\n",si);
	}
int intrest1()
	{
		int amt,rate,si;
		
		printf("amt=");
		scanf("%d\n",&amt);
		
		printf("rate=");
		scanf("%d\n",&rate);
		
		si=(amt*rate)/100;
		
		return si;
	}
	int main()
	{
		intrest();
		
		int si;
		si=intrest1();
		printf("si1=%d",si);

		return 0;

	}	
		