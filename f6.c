#include<stdio.h>
int rate,qty,amt,dis,billamt,gst,nbill;
void total()
{
	
	printf("rate=");
	scanf("\n%d",&rate);
	printf("qty=");
	scanf("\n%d",&qty);
	
	
}
void total1()
{
	total();
	amt=rate*qty;
    dis=amt*0.5;
   
    billamt=amt-dis;
	gst=billamt*0.18;
	nbill=billamt+gst;
}
void final()
{
	total1();
	
	printf("amt=%d ",amt);
	printf("dis=%d ",dis);
	 printf("billamt=%d ",billamt);
	  printf("gst=%d ",gst);
	   printf("netbill=%d ",nbill);
}
	 
	
int main()
{
	
	final();
	return 0;
}
