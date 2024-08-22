#include<stdio.h>
int main()
{
int per,grade;
int total=0;


int stud[5];
int sub[3];

for(int i=0;i<5;i++)

{
	printf("enter student :%d",i);
	scanf("%d",&stud[i]);
	for(int j=0;j<3;j++)
	{
		printf("marks:=%d",j);
		scanf("%d",&sub[j]);
		total+=sub[j];
		per=total/3;
	}
	
	
	printf("total=%d\n",total);
printf("per=%d\n",per);


if(per>=90)
{
	printf("A\n");
}
else if(per>=70)
{
	printf("B\n");
}
else if(per>=50)
{
	printf("C\n");
}
else {
	printf("FAIL\n");
}

	
}







	return 0;
}

		
			