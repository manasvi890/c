#include <stdio.h>
#include <string.h>
int main()
{
	char ch[50];
	int length = 0, i;

	gets(ch);
	for (i = 0; ch[i] != '\0'; i++)
	{

		length++;
	}
	printf("length=%d", length);

	return 0;
}