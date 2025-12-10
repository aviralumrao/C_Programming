// C program to check whether a year is a leap year or not
#include <stdio.h>
int main()
{
    int year;
    printf("Input your year : ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d is a leap year.", year);
    }
    else
    {
        printf("%d is not a leap year.", year);
    }
    return 0;
}

//output
// Input your year : 2020
// 2020 is a leap year.
// Input your year : 1900
// 1900 is not a leap year.
// Input your year : 2000
// 2000 is a leap year.