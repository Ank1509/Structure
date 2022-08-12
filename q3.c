#include <stdio.h>
struct emp
{
    int empid;
    char name[100];
    int empsal;
    int empint;
    int emptot;
};
int employee(struct emp *s)
{
    int max = (*s).emptot;
    int c = 0;
    for (int i = 1; i < 3; i++)
    {
        if ((*(s + i)).emptot > max)
        {
            max = (*(s + i)).emptot;
            c = i;
        }
    }
    return c;
}
int main()
{
    struct emp s[3];
    printf("Enter the employee id, employee name, employee salary and employee interest:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the details for %d employee:\n", i + 1);
        printf("Enter the employee id:");
        scanf("%d", &s[i].empid);
        printf("Enter the employee name:");
        scanf(" %[^\n]s", s[i].name);
        printf("Enter the employee basic salary:");
        scanf("%d", &s[i].empsal);
        printf("Enter the interest in percentage:");
        scanf("%d", &s[i].empint);
        s[i].emptot = (((s[i].empint) / 100) * s[i].empsal);
    }
    printf("The details of the employee with maximum salary is displayed below:\n");
    int n = employee(s);
    printf("Employee id:%d\n", s[n].empid);
    printf("Employee name:%s\n", s[n].name);
    printf("Employee basic salary is: %d", s[n].empsal);
    return 0;
}