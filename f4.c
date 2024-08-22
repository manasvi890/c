#include<stdio.h>
void intrest(int amt,int rate)
{
	int si;
	si=amt*rate/100;
	printf("si=%d\n",si);
}
int intrest1(int amt,int rate)

{
  
   int si;
   si=amt*rate/100;
   return si;   
}
int main()
{
	 intrest(20,10);
	
	int si;
	si=intrest1(100,40);
	printf("si1=%d",si);
	return 0;
}