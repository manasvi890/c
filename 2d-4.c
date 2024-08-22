#include<stdio.h>
int main()
{
    int arr[3][3];
    int ut=0,lt=0,sum=0;
    
    for(int i=0;i<3;i++)
    {
       for(int j=0;j<3;j++)
       {
           scanf("%d",&arr[i][j]);
       }
      
    }
    for(int i=0;i<3;i++)
    {
       for(int j=0;j<3;j++)
       {
           if(i>j)
           {
               
              
			   ut+=arr[i][j];
           }
          else if(i<j)
           {
               lt+=arr[i][j];
               
           }
          else 
           {
               sum+=arr[i][j];
               
           }
		  	   printf("%d",arr[i][j]);
       }

	   
       printf("\n");
	   
      
    }
	printf("ut=%d ",ut);
	printf("lt=%d ",lt);
	 printf("sum=%d ",sum);
    return 0;
}