//Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
int main()
{
    int day, month, year;

    printf("Enter the date in dd/mm/yyyy format: ");
    scanf("%d/%d/%d", &day, &month, &year);

    const char *monthNames[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    if (month < 1 || month > 12)
    {
        printf("Invalid month!\n");
        return 1;
    }

    printf("The date in dd-MMM-yyyy format is: %02d-%s-%d\n", day, monthNames[month - 1], year);

    return 0;
}