#include <stdio.h>
struct Student
{
    int rollno, per, total, marks[3];
    char name[50];
    
};
int main()
{
    struct Student s[5];

    for (int i = 1; i < 5; i++)
    {
        s[i].total = 0;
        
        printf("name:");
        scanf("%s", &s[i].name);
        
        printf("roll no:");
        scanf("%d", &s[i].rollno);


        for (int j = 0; j < 3; j++)
        {
            printf("marks%d:", j);
            scanf("%d", &s[i].marks[j]);
            printf("\n");
        }
        for (int j = 0; j < 3; j++)
        {
            s[i].total += s[i].marks[j];
        }
        printf("total=%d\n", s[i].total);

        s[i].per = s[i].total / 3;
        printf("per=%d", s[i].per);
    }

    return 0;                        
}
