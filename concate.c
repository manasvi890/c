

#include <stdio.h>

int main()
{
    char string1[20], string2[20];
    int i = 0, j = 0;
    printf("Enter  string number 1: ");
    scanf("%s", &string1);
    printf("Enter  string number 2: ");
    scanf("%s", &string2);

    for (i = 0; string1[i] != '\0'; i++)
        ;
    for (j = 0; string2[j] != '\0'; j++)
    {
        string1[i] = string2[j];
        i++;
    }
    string1[i] = '\0';
    printf("combined two strings =' %s'\n", string1);

    return 0;
}
