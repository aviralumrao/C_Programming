//program to calculate simple and compound interest
#include <stdio.h>
#include <math.h>
int main()
{
    double P, R, T, SI, CI;

    printf("Enter the Principal Amount (in Rs) : ");
    scanf("%lf", &P);
    printf("Enter the Rate of Intrest (in %%) : ");
    scanf("%lf", &R);
    printf("Enter the Time Period (in years): ");
    scanf("%lf", &T);

    // calculating simple intrest
    SI = (P * R * T) / 100.0;
    printf("\n Simple Intrest = %.2lf", SI);

    // calculating compund intrest
    CI = P * pow((1 + R / 100.0), T) - P;
    printf("\n Compund Intrest = %.2lf", CI);
    return 0;
}

//output
// Enter the Principal Amount (in Rs) : 10000
// Enter the Rate of Intrest (in %) : 5 
// Enter the Time Period (in years): 2
//  Simple Intrest = 1000.00
//  Compund Intrest = 1025.00   