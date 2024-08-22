#include <stdio.h>
#include <string.h>
int main()
{
   char ch[20], temp;
   int length = 0, i;
   printf("Enter String : ");
   scanf("%s", &ch);

   for (i = 0; ch[i] != '\0'; i++)
   {

      length++;
   }
   printf("length=%d\n", length);

   for (int i = 0; i < length / 2; i++)
   {
      temp = ch[i];
      ch[i] = ch[length - i - 1];
      ch[length - i - 1] = temp;
   }
   printf("Reverse:%s", ch);
   return 0;
}