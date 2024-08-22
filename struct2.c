#include <stdio.h>
struct Bill
{
    int rate, qty, amt, dis, billamt, gst, netbill;
};
int main()
{
    struct Bill b[5];

    for (int i = 1; i < 5; i++)
    {
        printf("rate:");
        scanf("%d", &b[i].rate);
        printf("qty:");
        scanf("%d", &b[i].qty);

        b[i].amt = b[i].rate * b[i].qty;
        printf("amt%d:", b[i].amt);

        b[i].dis = b[i].amt * 0.5;
        printf("dis%d:", b[i].dis);

        b[i].billamt = b[i].amt - b[i].dis;
        printf("billamt%d:", b[i].billamt);

        b[i].gst = b[i].billamt * 0.18;
        printf("gst%d:", b[i].gst);

        b[i].netbill = b[i].billamt + b[i].gst;
        printf("netbill%d:", b[i].netbill);

        printf("\n");
        }

    return 0;
}