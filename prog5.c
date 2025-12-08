// C program to swap two numbers using a temporary variable
#include <stdio.h>
int main()
{
    int n1, n2, temp;
    printf("Input First number : ");
    scanf("%d", &n1);
    printf("Input Second number : ");
    scanf("%d", &n2);

    temp = n1;
    n1 = n2;
    n2 = temp;

    printf("First Number = %d", n1);
    printf("\nSecond Number = %d", n2);
    return 0;
}

//output
// Input First number : 10      
// Input Second number : 20
// First Number = 20
// Second Number = 10

