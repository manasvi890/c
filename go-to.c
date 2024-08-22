#include <stdio.h>
int main()
{
    for (int i = 0; i <= 10; i++)
    {
        if (i == 9)
        {
            goto xyz;
        }
        printf("%d\t", i);
    }
xyz:

    printf("\n");
    for (int i = 90; i <= 100; i++)
    {
        printf("%d\t", i);
    }
    return 0;
}