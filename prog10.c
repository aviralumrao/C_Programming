// C program to calculate grade based on marks obtained in 5 subjects
#include <stdio.h>
int main()
{
    int m1, m2, m3, m4, m5, max;
    double sum, percent;
    printf("Input the Maximum Marks : ");
    scanf("%d", &max);
    printf("Input the marks\n");
    printf("Subject 1 : ");
    scanf("%d", &m1);
    printf("Subject 2 : ");
    scanf("%d", &m2);
    printf("Subject 3 : ");
    scanf("%d", &m3);
    printf("Subject 4 : ");
    scanf("%d", &m4);
    printf("Subject 5 : ");
    scanf("%d", &m5);

    sum = m1 + m2 + m3 + m4 + m5;
    percent = (sum / (max * 5.0)) * 100.0;

    printf("total marks = %.2lf\n", sum);
    printf("percentage = %.2lf\n", percent);
    if (percent > 90 && percent <= 100)
        printf("A");
    else if (percent <= 90 && percent > 80)
        printf("B");
    else if (percent <= 80 && percent > 60)
        printf("C");
    else
        printf("D");
    return 0;
}

//output
// Input the Maximum Marks : 100
// Input the marks
// Subject 1 : 95   
// Subject 2 : 85
// Subject 3 : 76
// Subject 4 : 88
// Subject 5 : 91
// B
