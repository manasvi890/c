#include<stdio.h>
int main()
{
char ch;


printf("enter value\n");
scanf("%c",&ch);

if(ch>90){
	
	printf("%c : %c",ch,ch-32);
}else{
	printf("%c : %c",ch,ch+32);
}

return 0;
}