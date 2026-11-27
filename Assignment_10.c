#include <stdio.h>

int main()
{
    int year, month, days, i, j;
    int day = 1;

    char *months[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    printf("Enter year: ");
    scanf("%d", &year);

    for(month = 0; month < 12; month++)
    {
        if(month == 1)
        {
            if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
                days = 29;
            else
                days = 28;
        }
        else if(month == 3 || month == 5 || month == 8 || month == 10)
            days = 30;
        else
            days = 31;

        printf("\n\n      %s %d\n", months[month], year);
        printf("Sun Mon Tue Wed Thu Fri Sat\n");

        for(i = 1; i <= days; i++)
        {
            printf("%3d ", i);

            if(i % 7 == 0)
                printf("\n");
        }

        printf("\n");
    }

    return 0;
}
