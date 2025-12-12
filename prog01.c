// Program to calculate total marks and percentage of 5 subjects
#include <stdio.h>
int main()
{
    int m1,m2,m3,m4,m5, sum = 0, max;
    double percent;
    printf("Input the Maximum Marks for each subject : ");
    scanf("%d", &max);
    printf("Input the marks.\n");
    printf("Subject 1 : ");
    scanf("%d",&m1);
    printf("Subject 2 : ");
    scanf("%d",&m2);
    printf("Subject 3 : ");
    scanf("%d",&m3);
    printf("Subject 4 : ");
    scanf("%d",&m4);
    printf("Subject 5 : ");
    scanf("%d",&m5);

    sum = m1+m2+m3+m4+m5;
    percent = (sum / (max * 5.0)) * 100.0;
    printf("Total Marks = %d", sum);
    printf("\nPercentage = %.2lf %%", percent);
    return 0;
}

//output
// Input the Maximum Marks for each subject : 100
// Input the marks.
// Subject 1 : 85
// Subject 2 : 90
// Subject 3 : 78
// Subject 4 : 92
// Subject 5 : 88
// Total Marks = 433
// Percentage = 86.60 %
    