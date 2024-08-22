#include <stdio.h>
int main()
{
    int a, b, i, n, total, n1;
    char sign[4];

    printf("n=");
    scanf("%d", &n);

    printf("enter sign:");
    scanf("%s", &sign[0]);

    printf("enter 1st number:");
    scanf("%d", &a);

    printf("enter 2nd number:");
    scanf("%d", &b);

    switch (sign[0])
    {
    case '+':
        total = a + b;
        printf("%d+%d=%d", a, b, total);
        break;

    case '-':
        total = a - b;
        printf("%d-%d=%d", a, b, total);
        break;

    case '*':
        total = a * b;
        printf("%d*%d=%d", a, b, total);
        break;

    case '/':
        total = a / b;
        printf("%d/%d=%d", a, b, total);
        break;

    default:
        printf("sign is not match");
        break;
    }
    printf("\n");

    i = 1;
    while (i <= n)
    {
        i++;

        printf("enter sign:");
        scanf("%s", &sign[0]);

        printf("enter new number:");
        scanf("%d", &n1);

        switch (sign[0])
        {
        case '+':

            printf("%d+%d=%d", total, n1, total + n1);
            printf("", total += n1);
            break;

        case '-':

            printf("%d-%d=%d", total, n1, total - n1);
            printf("", total -= n1);
            break;

        case '*':

            printf("%d*%d=%d", total, n1, total * n1);
            printf("", total *= n1);
            break;

        case '/':

            printf("%d/%d=%d", total, n1, total / n1);
            printf("", total /= n1);
            break;

        default:
            printf("sign is not match");
            break;
        }
        printf("\n");
    }
    return 0;
}