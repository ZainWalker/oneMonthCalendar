//This program inputs number of days in the month, and a starting day, and outputs the information in the form of a calendar

#include <stdio.h>

int main(void)
{

    int i, weekday, n;

    printf("Enter the number of days in the month: ");
    scanf("%d", &n);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &weekday);

    printf("\n Mon Tu We Th Fr Sa Su\n");

    for (i = 1; i <= n; i++) {
        if (i < weekday)
            printf("   ");
        else
            printf("%3d", i);
        if (i % 7 == 0)
            printf("\n");
    }
    return 0;
}