#include<stdio.h>
int main()
{
    int a,b;
     printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
   

    int *c;
    int *d;
    c=&a;
    d=&b;



  *c=*c+*d;
  *d=*c-*d;
  *c=*c-*d;
printf("after swaping\n");
  printf("a=%d\n",*c);
  printf("b=%d\n",*d);
  
   

    return 0;

}
    