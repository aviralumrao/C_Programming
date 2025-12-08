// C program to check whether two numbers are equal or not
#include <stdio.h>
int main()
{
    int n1, n2;
    printf("Input the first number : ");
    scanf("%d", &n1);
    printf("Input the second number : ");
    scanf("%d", &n2);

    if (n1 == n2)
    {
        printf("The two numbers are equal");
    }
    else
    {
        printf("The two numbers are not equal");
    }
    return 0;
}

//output
// Input the first number : 15
// Input the second number : 20
// The two numbers are not equal

