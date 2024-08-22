#include<stdio.h>
int sum=0;
int num;
void perfect()
{
    if(num<=1)
    {
        
    }
    for(int i=1;i<=num/2;i++)
    {
        if(num%i==0)
        {
            sum+=i;
        }
    }
    return sum==num;
}
void example()
{
    perfect();
    printf("enter number");
    scanf("%d",&num);
    
    if(sum==num)
    {
        printf("%d is perfect number",num);
        
    }
    else
    {
        printf("%d is not a perfect number",num);
    }
    
}
int main()
{
    example();
    return 0;
}
