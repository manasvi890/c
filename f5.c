#include<stdio.h>
int i,j;
void loop1()
{
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
}


/*int loop2()
{
	for(i=0;i<5;i++)
	
		for(j=0;j<5;j++)
		
		
		
	
	return loop2();
}*/
void loop3(int a,int b)
{
	
	for(i=a;i<b;i++)
	{
	  for(j=a;j<b;j++)
	  {
		  printf("%d",i);
	  }
	  printf("\n");
	}
}

/*int loop4(int a,int b)
{
	for(i=a;i<b;i++)
	
		for(j=a;j<b;j++)
		
	return i;
}	*/
			
	int main()
	{
		loop1();
		loop3(0,5);
		
		/*int a;
		a=loop2();
		printf("*");
		printf("\n");
		*/
		
		/*int s;
		s=loop4(1,5);
		printf("%d",i);*/
		
		
		return 0;
	}
		