#include<stdio.h>
int main()
{
int income,tax,total;

printf("income=");
scanf("%d",&income);

if (income<=2500)
{
	tax=income*0.00;
}
else if(income>2500 || income<=5000)
{
	tax= income* 0.10;
}
else if(income>5000 || income<=10000)
{
tax=income* 0.20;
}
else if(income>10000)
{
    tax=income*0.30;
}

printf("tax=%d",tax);

return 0;
}
