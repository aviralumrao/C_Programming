#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int n, t, *p;
    printf("Enter a number :");
    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", p + i);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }
}
