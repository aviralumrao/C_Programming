#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int n, t, *p;
    printf("Enter a number :");
    scanf("%d", &n);
    p = (int *)calloc(n, sizeof(int));

    printf("Enter %d numbers: ", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", p + i);
    }

    printf("The numbers are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d : ", *(p + i));
        printf("%d \n", (p + i));
    }

    return 0;
}
