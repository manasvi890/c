#include<stdio.h>
int fact(int n)
{
    if(n==0||n==1)
    {
        return 1;

    }
    else{
        return n*fact(n-1);
    }
}
int main()
{
    int n;
    printf("enter value=");
    scanf("%d",&n);

    int total=fact(n);
    printf("fectorial is%d",total);

    return 0;
}