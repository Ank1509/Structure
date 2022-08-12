#include <stdio.h>
struct date
{
    int year;
};
int differ(struct date *d)
{
    int diff;
    if (d[0].year > d[1].year)
    {
        diff = d[0].year - d[1].year;
        return diff;
    }
    else
    {
        diff = d[1].year - d[0].year;
        return diff;
    }
}
int main()
{
    struct date d[2];
    printf("Enter the first year:");
    scanf("%d", &d[0].year);
    printf("Enter the second year:");
    scanf("%d", &d[1].year);
    int diff = differ(d);
    printf("The difference between two dates is: %d", diff);
    return 0;
}